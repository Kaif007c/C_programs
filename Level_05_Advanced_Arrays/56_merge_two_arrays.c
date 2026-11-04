#include <stdio.h>
int main(void) {
    int n,m,a[1000],b[1000];
    scanf("%d",&n);
    if(n<0||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    scanf("%d",&m);
    if(m<0||m>1000||n+m>2000)return 1;
    for(int i=0; i<m; i++)scanf("%d",&b[i]);
    for(int i=0; i<n; i++)printf("%d ",a[i]);
    for(int i=0; i<m; i++)printf("%d ",b[i]);
    puts("");
    return 0;
}
