#include <stdio.h>
int main(void) {
    int a[1000],b[1000],n,m,i=0,j=0;
    scanf("%d",&n);
    if(n<0||n>1000)return 1;
    for(int k=0; k<n; k++)scanf("%d",&a[k]);
    scanf("%d",&m);
    if(m<0||m>1000)return 1;
    for(int k=0; k<m; k++)scanf("%d",&b[k]);
    while(i<n&&j<m)printf("%d ",a[i]<=b[j]?a[i++]:b[j++]);
    while(i<n)printf("%d ",a[i++]);
    while(j<m)printf("%d ",b[j++]);
    puts("");
    return 0;
}
