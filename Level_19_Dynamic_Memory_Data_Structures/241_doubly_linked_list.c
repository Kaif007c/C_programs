#include <stdio.h>
#include <stdlib.h>
typedef struct N {
    int x;
    struct N*prev,*next;
}
N;
int main(void) {
    N*h=NULL,*t=NULL;
    int n,x;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&x);
        N*p=malloc(sizeof *p);
        if(!p)return 1;
        p->x=x;
        p->prev=t;
        p->next=NULL;
        if(t)t->next=p;
        else h=p;
        t=p;
    }
    for(N*p=h; p; p=p->next)printf("%d <-> ",p->x);
    puts("NULL");
    while(h) {
        N*p=h;
        h=h->next;
        free(p);
    }
    return 0;
}
