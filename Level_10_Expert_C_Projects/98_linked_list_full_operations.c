#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
}
Node;
Node *head=NULL;
Node *make_node(int x) {
    Node *p=malloc(sizeof *p);
    if(!p) {
        perror("malloc");
        exit(1);
    }
    p->data=x;
    p->next=NULL;
    return p;
}
void insert_begin(int x) {
    Node *p=make_node(x);
    p->next=head;
    head=p;
}
void insert_end(int x) {
    Node *p=make_node(x);
    if(!head) {
        head=p;
        return;
    }
    Node *q=head;
    while(q->next)q=q->next;
    q->next=p;
}
int insert_pos(int x,int pos) {
    if(pos<1)return 0;
    if(pos==1) {
        insert_begin(x);
        return 1;
    }
    Node *q=head;
    for(int i=1; q&&i<pos-1; i++)q=q->next;
    if(!q)return 0;
    Node *p=make_node(x);
    p->next=q->next;
    q->next=p;
    return 1;
}
int delete_value(int x) {
    Node **p=&head;
    while(*p&&(*p)->data!=x)p=&(*p)->next;
    if(!*p)return 0;
    Node *t=*p;
    *p=t->next;
    free(t);
    return 1;
}
int search(int x) {
    int i=1;
    for(Node *p=head; p; p=p->next,i++)if(p->data==x)return i;
    return -1;
}
void reverse(void) {
    Node *prev=NULL,*cur=head;
    while(cur) {
        Node *next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    head=prev;
}
void display(void) {
    for(Node *p=head; p; p=p->next)printf("%d -> ",p->data);
    puts("NULL");
}
int count(void) {
    int n=0;
    for(Node *p=head; p; p=p->next)n++;
    return n;
}
int main(void) {
    int ch,x,pos;
    do {
        printf("\\n1 Insert beginning 2 Insert end 3 Insert position 4 Delete value 5 Search 6 Reverse 7 Display 8 Count 9 Exit\\nChoice: ");
        if(scanf("%d",&ch)!=1)break;
        switch(ch) {
            case 1:case 2:printf("Value: ");
            scanf("%d",&x);
            if(ch==1)insert_begin(x);
            else insert_end(x);
            break;
            case 3:printf("Value and position: ");
            scanf("%d%d",&x,&pos);
            if(!insert_pos(x,pos))puts("Invalid position");
            break;
            case 4:scanf("%d",&x);
            puts(delete_value(x)?"Deleted":"Not found");
            break;
            case 5:scanf("%d",&x);
            pos=search(x);
            if(pos<0)puts("Not found");
            else printf("Position %d\n",pos);
            break;
            case 6:reverse();
            break;
            case 7:display();
            break;
            case 8:printf("Nodes = %d\n",count());
            break;
        }
    }
    while(ch!=9);
    while(head) {
        Node *t=head;
        head=head->next;
        free(t);
    }
    return 0;
}
