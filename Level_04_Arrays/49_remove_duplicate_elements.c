#include <stdio.h>
int main(void) {
    int n,a[1000],k=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++) {
        int seen=0;
        for(int j=0; j<k; j++)if(a[j]==a[i])seen=1;
        if(!seen)a[k++]=a[i];
    }
    for(int i=0; i<k; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
