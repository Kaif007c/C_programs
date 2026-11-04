#include <stdio.h>
long long reverse_digits(long long n,long long r) {
    if(n==0)return r;
    return reverse_digits(n/10,r*10+n%10);
}
int main(void) {
    long long n;
    scanf("%lld",&n);
    long long r=reverse_digits(n<0?-n:n,0);
    printf("%lld\n",n<0?-r:r);
    return 0;
}
