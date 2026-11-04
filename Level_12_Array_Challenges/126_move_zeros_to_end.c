#include <stdio.h>
int main(void) {
    int n,a[1000],k=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++)if(a[i]!=0)a[k++]=a[i];
    while(k<n)a[k++]=0;
    for(int i=0; i<n; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
