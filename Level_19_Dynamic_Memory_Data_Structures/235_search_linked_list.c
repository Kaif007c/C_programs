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
    int i=0,found=-1;
    for(N*p=h; p; p=p->n,i++)if(p->x==key) {
        found=i;
        break;
    }
    if(found<0)puts("Not found");
    else printf("Index from head=%d\n",found);
    while(h) {
        N*t=h;
        h=h->n;
        free(t);
    }
    return 0;
}
