#include <stdio.h>
#include <stdlib.h>
typedef struct N {
    int x;
    struct N*n;
}
N;
int main(void) {
    N*f=NULL,*r=NULL;
    int ch,x;
    do {
        printf("\\n1 Enqueue 2 Dequeue 3 Display 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1) {
            scanf("%d",&x);
            N*p=malloc(sizeof *p);
            if(!p)continue;
            p->x=x;
            p->n=NULL;
            if(r)r->n=p;
            else f=p;
            r=p;
        }
        else if(ch==2) {
            if(!f)puts("Empty");
            else {
                N*p=f;
                printf("%d\n",p->x);
                f=f->n;
                if(!f)r=NULL;
                free(p);
            }
        }
        else if(ch==3) {
            for(N*p=f; p; p=p->n)printf("%d ",p->x);
            puts("");
        }
    }
    while(ch!=4);
    while(f) {
        N*p=f;
        f=f->n;
        free(p);
    }
    return 0;
}
