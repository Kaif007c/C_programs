#include <stdio.h>
#include <stdlib.h>
typedef struct N {
    int x;
    struct N*n;
}
N;
int main(void) {
    N*h=NULL;
    int n,x,pos;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&x);
        N*p=malloc(sizeof *p);
        if(!p)return 1;
        p->x=x;
        p->n=h;
        h=p;
    }
    scanf("%d%d",&x,&pos);
    N*p=malloc(sizeof *p);
    if(!p)return 1;
    p->x=x;
    if(pos<=1)p->n=h,h=p;
    else {
        N*q=h;
        for(int i=1; q&&i<pos-1; i++)q=q->n;
        if(!q) {
            free(p);
            puts("Invalid position");
        }
        else p->n=q->n,q->n=p;
    }
    for(N*q=h; q; q=q->n)printf("%d ",q->x);
    puts("");
    while(h) {
        p=h;
        h=h->n;
        free(p);
    }
    return 0;
}
