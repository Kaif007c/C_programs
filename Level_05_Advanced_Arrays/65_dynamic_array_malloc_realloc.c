#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    printf("Initial number of elements: ");
    if(scanf("%d",&n)!=1||n<1)return 1;
    int *a=malloc((size_t)n*sizeof *a);
    if(!a) {
        perror("malloc");
        return 1;
    }
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    int extra;
    printf("How many more elements? ");
    if(scanf("%d",&extra)!=1||extra<0) {
        free(a);
        return 1;
    }
    int *tmp=realloc(a,(size_t)(n+extra)*sizeof *a);
    if(!tmp&&n+extra>0) {
        free(a);
        perror("realloc");
        return 1;
    }
    a=tmp;
    for(int i=n; i<n+extra; i++)scanf("%d",&a[i]);
    for(int i=0; i<n+extra; i++)printf("%d ",a[i]);
    puts("");
    free(a);
    return 0;
}
