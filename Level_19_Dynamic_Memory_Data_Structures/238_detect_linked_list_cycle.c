#include <stdio.h>
#include <stdlib.h>
typedef struct N {
    int x;
    struct N*n;
}
N;
int main(void) {
    N*h=NULL,*t=NULL,*nodes[100];
    int n,x,cycle;
    scanf("%d",&n);
    if(n<0||n>100)return 1;
    for(int i=0; i<n; i++) {
        scanf("%d",&x);
        nodes[i]=malloc(sizeof(N));
        if(!nodes[i])return 1;
        nodes[i]->x=x;
        nodes[i]->n=NULL;
        if(t)t->n=nodes[i];
        else h=nodes[i];
        t=nodes[i];
    }
    scanf("%d",&cycle);
    if(cycle>=0&&cycle<n&&t)t->n=nodes[cycle];
    N*s=h,*f=h;
    do {
        if(!f||!f->n) {
            puts("No cycle");
            break;
        }
        s=s->n;
        f=f->n->n;
        if(s==f) {
            puts("Cycle detected");
            break;
        }
    }
    while(1);
    if(t&&cycle>=0&&cycle<n)t->n=NULL;
    for(int i=0; i<n; i++)free(nodes[i]);
    return 0;
}
