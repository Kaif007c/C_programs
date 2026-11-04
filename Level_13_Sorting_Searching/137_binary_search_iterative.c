#include <stdio.h>
int main(void) {
    int n,a[1000],x,l=0,r;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    r=n-1;
    while(l<=r) {
        int m=l+(r-l)/2;
        if(a[m]==x) {
            printf("Index %d\n",m);
            return 0;
        }
        if(a[m]<x)l=m+1;
        else r=m-1;
    }
    puts("Not found");
    return 0;
}
