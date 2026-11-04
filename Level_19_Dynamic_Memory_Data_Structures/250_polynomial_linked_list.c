#include <stdio.h>
#include <stdlib.h>
typedef struct T {
    int c,e;
    struct T*n;
}
T;
int main(void) {
    T*h=NULL,**tail=&h;
    int n;
    scanf("%d",&n);
    if(n<0||n>1000)return 1;
    for(int i=0; i<n; i++) {
        T*p=malloc(sizeof *p);
        if(!p)return 1;
        scanf("%d%d",&p->c,&p->e);
        p->n=NULL;
        *tail=p;
        tail=&p->n;
    }
    for(T*p=h; p; p=p->n) {
        if(p!=h&&p->c>=0)printf("+ ");
        printf("%dx^%d ",p->c,p->e);
    }
    puts("");
    while(h) {
        T*p=h;
        h=h->n;
        free(p);
    }
    return 0;
}
