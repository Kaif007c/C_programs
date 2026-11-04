#include <stdio.h>
int main(void) {
    int n,a[1000],x,l=0,r;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    r=n-1;
    while(l<=r&&x>=a[l]&&x<=a[r]) {
        if(a[l]==a[r]) {
            if(a[l]==x) {
                printf("Index %d\n",l);
                return 0;
            }
            break;
        }
        long long pos=l+((long long)(x-a[l])*(r-l))/(a[r]-a[l]);
        if(a[pos]==x) {
            printf("Index %lld\n",pos);
            return 0;
        }
        if(a[pos]<x)l=(int)pos+1;
        else r=(int)pos-1;
    }
    puts("Not found");
    return 0;
}
