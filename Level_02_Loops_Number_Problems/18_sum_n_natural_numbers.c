#include <stdio.h>
int main(void) {
    long long n;
    scanf("%lld",&n);
    if(n<0)return 1;
    printf("Sum = %lld\n",n*(n+1)/2);
    return 0;
}
