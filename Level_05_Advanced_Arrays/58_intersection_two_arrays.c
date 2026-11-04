#include <stdio.h>
int main(void) {
    int n,m,a[1000],b[1000],out[1000],k=0;
    scanf("%d",&n);
    if(n<0||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    scanf("%d",&m);
    if(m<0||m>1000)return 1;
    for(int i=0; i<m; i++)scanf("%d",&b[i]);
    for(int i=0; i<n; i++) {
        int in=0,seen=0;
        for(int j=0; j<m; j++)if(a[i]==b[j])in=1;
        for(int j=0; j<k; j++)if(out[j]==a[i])seen=1;
        if(in&&!seen)out[k++]=a[i];
    }
    for(int i=0; i<k; i++)printf("%d ",out[i]);
    puts("");
    return 0;
}
