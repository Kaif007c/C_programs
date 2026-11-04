#include <stdio.h>
#include <limits.h>
int main(void) {
    int n,a[1000],v[3]= {
        INT_MIN,INT_MIN,INT_MIN
    }
    ;
    scanf("%d",&n);
    if(n<3||n>1000)return 1;
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        int x=a[i];
        if(x==v[0]||x==v[1]||x==v[2])continue;
        if(x>v[0]) {
            v[2]=v[1];
            v[1]=v[0];
            v[0]=x;
        }
        else if(x>v[1]) {
            v[2]=v[1];
            v[1]=x;
        }
        else if(x>v[2])v[2]=x;
    }
    if(v[2]==INT_MIN)puts("No third distinct largest");
    else printf("%d\n",v[2]);
    return 0;
}
