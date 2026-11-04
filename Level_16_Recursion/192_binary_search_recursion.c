#include <stdio.h>
int bs(int a[],int l,int r,int x) {
    if(l>r)return -1;
    int m=l+(r-l)/2;
    if(a[m]==x)return m;
    return a[m]<x?bs(a,m+1,r,x):bs(a,l,m-1,x);
}
int main(void) {
    int n,a[1000],x;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    int p=bs(a,0,n-1,x);
    if(p<0)puts("Not found");
    else printf("%d\n",p);
    return 0;
}
