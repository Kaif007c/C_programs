#include <stdio.h>
int main(void) {
    long long n,p=1;
    scanf("%lld",&n);
    if(n<0)n=-n;
    do {
        p*=n%10;
        n/=10;
    }
    while(n);
    printf("%lld\n",p);
    return 0;
}
