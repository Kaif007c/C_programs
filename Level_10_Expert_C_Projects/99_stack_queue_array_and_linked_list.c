#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int astack[MAX],top=-1,queue[MAX],front=0,rear=-1;
typedef struct Node {
    int x;
    struct Node *next;
}
Node;
Node *lstack=NULL,*qfront=NULL,*qrear=NULL;
void apush(int x) {
    if(top==MAX-1)puts("Stack full");
    else astack[++top]=x;
}
void apop(void) {
    if(top<0)puts("Stack empty");
    else printf("Popped %d\n",astack[top--]);
}
void aenqueue(int x) {
    if(rear==MAX-1)puts("Queue full");
    else queue[++rear]=x;
}
void adequeue(void) {
    if(front>rear)puts("Queue empty");
    else printf("Dequeued %d\n",queue[front++]);
}
void lpush(int x) {
    Node *p=malloc(sizeof *p);
    if(!p)return;
    p->x=x;
    p->next=lstack;
    lstack=p;
}
void lpop(void) {
    if(!lstack) {
        puts("Stack empty");
        return;
    }
    Node *p=lstack;
    printf("Popped %d\n",p->x);
    lstack=p->next;
    free(p);
}
void lenqueue(int x) {
    Node *p=malloc(sizeof *p);
    if(!p)return;
    p->x=x;
    p->next=NULL;
    if(qrear)qrear->next=p;
    else qfront=p;
    qrear=p;
}
void ldequeue(void) {
    if(!qfront) {
        puts("Queue empty");
        return;
    }
    Node *p=qfront;
    printf("Dequeued %d\n",p->x);
    qfront=p->next;
    if(!qfront)qrear=NULL;
    free(p);
}
int main(void) {
    int ch,x;
    do {
        printf("\\n1 Array push 2 Array pop 3 Array peek 4 Array enqueue 5 Array dequeue 6 Linked push 7 Linked pop 8 Linked enqueue 9 Linked dequeue 10 Display array stack 11 Display array queue 12 Exit\\n");
        if(scanf("%d",&ch)!=1)break;
        switch(ch) {
            case 1:scanf("%d",&x);
            apush(x);
            break;
            case 2:apop();
            break;
            case 3:if(top<0)puts("Empty");
            else printf("%d\n",astack[top]);
            break;
            case 4:scanf("%d",&x);
            aenqueue(x);
            break;
            case 5:adequeue();
            break;
            case 6:scanf("%d",&x);
            lpush(x);
            break;
            case 7:lpop();
            break;
            case 8:scanf("%d",&x);
            lenqueue(x);
            break;
            case 9:ldequeue();
            break;
            case 10:for(int i=top; i>=0; i--)printf("%d ",astack[i]);
            puts("");
            break;
            case 11:for(int i=front; i<=rear; i++)printf("%d ",queue[i]);
            puts("");
            break;
        }
    }
    while(ch!=12);
    while(lstack) {
        Node*p=lstack;
        lstack=p->next;
        free(p);
    }
    while(qfront) {
        Node*p=qfront;
        qfront=p->next;
        free(p);
    }
    return 0;
}
