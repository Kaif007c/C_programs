#include <stdio.h>
int main(void) {
    long long n;
    int count=0;
    scanf("%lld",&n);
    if(n==0)count=1;
    while(n) {
        count++;
        n/=10;
    }
    printf("Digits = %d\n",count);
    return 0;
}
