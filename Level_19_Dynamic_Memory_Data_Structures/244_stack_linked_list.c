#include <stdio.h>
#include <stdlib.h>
typedef struct N {
    int x;
    struct N*n;
}
N;
int main(void) {
    N*t=NULL;
    int ch,x;
    do {
        printf("\\n1 Push 2 Pop 3 Peek 4 Display 5 Exit\\n");
        scanf("%d",&ch);
        if(ch==1) {
            scanf("%d",&x);
            N*p=malloc(sizeof *p);
            if(!p)continue;
            p->x=x;
            p->n=t;
            t=p;
        }
        else if(ch==2) {
            if(!t)puts("Empty");
            else {
                N*p=t;
                printf("%d\n",p->x);
                t=p->n;
                free(p);
            }
        }
        else if(ch==3) {
            if(t)printf("%d\n",t->x);
            else puts("Empty");
        }
        else if(ch==4) {
            for(N*p=t; p; p=p->n)printf("%d ",p->x);
            puts("");
        }
    }
    while(ch!=5);
    while(t) {
        N*p=t;
        t=t->n;
        free(p);
    }
    return 0;
}
