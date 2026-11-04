#include <stdio.h>
int main(void) {
    int n,a[1000],*l=a,*r;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",a+i);
    r=a+n-1;
    while(l<r) {
        int t=*l;
        *l=*r;
        *r=t;
        l++;
        r--;
    }
    for(int i=0; i<n; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
