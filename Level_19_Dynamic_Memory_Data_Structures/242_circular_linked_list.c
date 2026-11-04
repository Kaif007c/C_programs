#include <stdio.h>
#include <stdlib.h>
typedef struct N {
    int x;
    struct N*n;
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
        if(!h)h=p;
        else t->n=p;
        t=p;
    }
    if(t)t->n=h;
    if(h) {
        N*p=h;
        do {
            printf("%d -> ",p->x);
            p=p->n;
        }
        while(p!=h);
        puts("(back to head)");
    }
    if(t)t->n=NULL;
    while(h) {
        N*p=h;
        h=h->n;
        free(p);
    }
    return 0;
}
