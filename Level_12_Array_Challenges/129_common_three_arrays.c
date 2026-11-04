#include <stdio.h>
int main(void) {
    int a[500],b[500],c[500],n,m,k;
    scanf("%d",&n);
    if(n<0||n>500)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    scanf("%d",&m);
    if(m<0||m>500)return 1;
    for(int i=0; i<m; i++)scanf("%d",&b[i]);
    scanf("%d",&k);
    if(k<0||k>500)return 1;
    for(int i=0; i<k; i++)scanf("%d",&c[i]);
    for(int i=0; i<n; i++) {
        int x=0,y=0,dup=0;
        for(int j=0; j<m; j++)if(a[i]==b[j])x=1;
        for(int j=0; j<k; j++)if(a[i]==c[j])y=1;
        for(int j=0; j<i; j++)if(a[j]==a[i])dup=1;
        if(x&&y&&!dup)printf("%d ",a[i]);
    }
    puts("");
    return 0;
}
