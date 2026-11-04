#include <stdio.h>
int main(void) {
    int n,a[1000];
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",a+i);
    int *l=a,*r=a+n-1;
    while(l<r) {
        int t=*l;
        *l++=*r;
        *r--=t;
    }
    for(int i=0; i<n; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
