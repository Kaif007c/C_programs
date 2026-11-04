#include <stdio.h>
int main(void) {
    int n,a[1000];
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    int m=a[0];
    for(int i=1; i<n; i++)if(a[i]>m)m=a[i];
    printf("%d\n",m);
    return 0;
}
