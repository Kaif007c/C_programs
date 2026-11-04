#include <stdio.h>
int main(void) {
    int n,a[1000],k;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    scanf("%d",&k);
    k=((k%n)+n)%n;
    for(int i=0; i<n; i++)printf("%d ",a[(i+k)%n]);
    puts("");
    return 0;
}
