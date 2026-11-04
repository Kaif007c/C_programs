#include <stdio.h>
int main(void) {
    long long n,rev=0;
    scanf("%lld",&n);
    int sign=n<0?-1:1;
    if(n<0)n=-n;
    while(n) {
        rev=rev*10+n%10;
        n/=10;
    }
    printf("Reverse = %lld\n",rev*sign);
    return 0;
}
