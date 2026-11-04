#include <stdio.h>
#include <stdlib.h>
typedef struct N {
    int x;
    struct N*n;
}
N;
int main(void) {
    N*h=NULL;
    int n,x,key;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&x);
        N*p=malloc(sizeof *p);
        if(!p)return 1;
        p->x=x;
        p->n=h;
        h=p;
    }
    scanf("%d",&key);
    N**p=&h;
    while(*p&&(*p)->x!=key)p=&(*p)->n;
    if(*p) {
        N*t=*p;
        *p=t->n;
        free(t);
    }
    for(N*q=h; q; q=q->n)printf("%d ",q->x);
    puts("");
    while(h) {
        N*t=h;
        h=h->n;
        free(t);
    }
    return 0;
}
