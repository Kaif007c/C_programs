#include <stdio.h>
int main(void) {
    long long n;
    int sum=0;
    scanf("%lld",&n);
    if(n<0)n=-n;
    while(n) {
        sum+=(int)(n%10);
        n/=10;
    }
    printf("Sum = %d\n",sum);
    return 0;
}
