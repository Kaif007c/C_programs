#include <stdio.h>
int main(void) {
    int n,m,a[1000],b[1000],u[2000],k=0;
    scanf("%d",&n);
    if(n<0||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    scanf("%d",&m);
    if(m<0||m>1000)return 1;
    for(int i=0; i<m; i++)scanf("%d",&b[i]);
    for(int z=0; z<n+m; z++) {
        int v=z<n?a[z]:b[z-n],seen=0;
        for(int j=0; j<k; j++)if(u[j]==v)seen=1;
        if(!seen)u[k++]=v;
    }
    for(int i=0; i<k; i++)printf("%d ",u[i]);
    puts("");
    return 0;
}
