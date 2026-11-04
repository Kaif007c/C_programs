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
        p->n=NULL;
        if(t)t->n=p;
        else h=p;
        t=p;
    }
    for(N*p=h; p; p=p->n)printf("%d -> ",p->x);
    puts("NULL");
    while(h) {
        N*p=h;
        h=h->n;
        free(p);
    }
    return 0;
}
