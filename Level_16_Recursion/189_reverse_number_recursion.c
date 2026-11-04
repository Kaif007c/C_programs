#include <stdio.h>
long long rev(long long n,long long r) {
    return n==0?r:rev(n/10,r*10+n%10);
}
int main(void) {
    long long n;
    scanf("%lld",&n);
    printf("%lld\n",n<0?-rev(-n,0):rev(n,0));
    return 0;
}
