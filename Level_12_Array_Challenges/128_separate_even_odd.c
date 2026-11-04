#include <stdio.h>
int main(void) {
    int n,a[1000],b[1000],k=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++)if(a[i]%2==0)b[k++]=a[i];
    for(int i=0; i<n; i++)if(a[i]%2!=0)b[k++]=a[i];
    for(int i=0; i<n; i++)printf("%d ",b[i]);
    puts("");
    return 0;
}
