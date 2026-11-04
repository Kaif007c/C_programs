#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n,m;
    scanf("%d",&n);
    if(n<1)return 1;
    int*a=malloc((size_t)n*sizeof *a);
    if(!a)return 1;
    for(int i=0; i<n; i++)scanf("%d",a+i);
    scanf("%d",&m);
    if(m<1) {
        free(a);
        return 1;
    }
    int*t=realloc(a,(size_t)m*sizeof *a);
    if(!t) {
        free(a);
        return 1;
    }
    a=t;
    for(int i=n; i<m; i++)scanf("%d",a+i);
    for(int i=0; i<m; i++)printf("%d ",a[i]);
    puts("");
    free(a);
    return 0;
}
