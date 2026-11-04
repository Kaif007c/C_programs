#include <stdio.h>
#include <stdlib.h>
typedef struct N {
    int x;
    struct N*n;
}
N;
N*readlist(int n) {
    N*h=NULL,**p=&h;
    for(int i=0,x; i<n; i++) {
        scanf("%d",&x);
        *p=malloc(sizeof(N));
        if(!*p)exit(1);
        (*p)->x=x;
        p=&(*p)->n;
    }
    *p=NULL;
    return h;
}
int main(void) {
    int n,m;
    scanf("%d",&n);
    if(n<0)return 1;
    N*a=readlist(n);
    scanf("%d",&m);
    if(m<0)return 1;
    N*b=readlist(m);
    N dummy= {
        0,NULL
    }
    ,*t=&dummy;
    while(a&&b) {
        N**s=a->x<=b->x?&a:&b;
        t->n=*s;
        *s=(*s)->n;
        t=t->n;
    }
    t->n=a?a:b;
    for(N*p=dummy.n; p; p=p->n)printf("%d ",p->x);
    puts("");
    while(dummy.n) {
        N*p=dummy.n;
        dummy.n=p->n;
        free(p);
    }
    return 0;
}
