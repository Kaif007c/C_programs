#include <stdio.h>
int sumdigits(long long n) {
    if(n<0)n=-n;
    return n==0?0:(int)(n%10)+sumdigits(n/10);
}
int main(void) {
    long long n;
    scanf("%lld",&n);
    printf("%d\n",sumdigits(n));
    return 0;
}
