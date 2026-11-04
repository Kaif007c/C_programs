#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n,a[1000],max=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(a[i]<0) {
            puts("Only non-negative integers supported");
            return 1;
        }
        if(a[i]>max)max=a[i];
    }
    int *c=calloc((size_t)max+1,sizeof *c);
    if(!c)return 1;
    for(int i=0; i<n; i++)c[a[i]]++;
    for(int i=0; i<=max; i++)while(c[i]--)printf("%d ",i);
    puts("");
    free(c);
    return 0;
}
