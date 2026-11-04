#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int r,c;
    printf("Rows and columns: ");
    if(scanf("%d%d",&r,&c)!=2||r<1||c<1)return 1;
    int **a=malloc((size_t)r*sizeof *a);
    if(!a)return 1;
    for(int i=0; i<r; i++) {
        a[i]=malloc((size_t)c*sizeof **a);
        if(!a[i]) {
            for(int j=0; j<i; j++)free(a[j]);
            free(a);
            return 1;
        }
    }
    for(int i=0; i<r; i++)for(int j=0; j<c; j++)scanf("%d",&a[i][j]);
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)printf("%d ",a[i][j]);
        puts("");
    }
    for(int i=0; i<r; i++)free(a[i]);
    free(a);
    return 0;
}
