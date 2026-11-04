#include <stdio.h>
#include <limits.h>
int main(void) {
    int n,a[1000],m=INT_MIN,s=INT_MIN;
    scanf("%d",&n);
    if(n<2||n>1000)return 1;
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(a[i]>m) {
            s=m;
            m=a[i];
        }
        else if(a[i]<m&&a[i]>s)s=a[i];
    }
    if(s==INT_MIN)puts("No distinct second-largest element");
    else printf("%d\n",s);
    return 0;
}
