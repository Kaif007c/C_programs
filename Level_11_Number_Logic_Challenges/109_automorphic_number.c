#include <stdio.h>
int main(void) {
    long long n,sq,p=1;
    scanf("%lld",&n);
    if(n<0)return 1;
    sq=n*n;
    for(long long x=n; x; x/=10)p*=10;
    puts(sq%p==n?"Automorphic":"Not automorphic");
    return 0;
}
