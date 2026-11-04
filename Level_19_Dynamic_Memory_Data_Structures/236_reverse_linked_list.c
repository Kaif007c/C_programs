#include <stdio.h>
#include <stdlib.h>
typedef struct N {
    int x;
    struct N*n;
}
N;
int main(void) {
    N*h=NULL;
    int n,x;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&x);
        N*p=malloc(sizeof *p);
        if(!p)return 1;
        p->x=x;
        p->n=h;
        h=p;
    }
    N*prev=NULL,*cur=h;
    while(cur) {
        N*next=cur->n;
        cur->n=prev;
        prev=cur;
        cur=next;
    }
    h=prev;
    for(N*p=h; p; p=p->n)printf("%d ",p->x);
    puts("");
    while(h) {
        N*t=h;
        h=h->n;
        free(t);
    }
    return 0;
}
