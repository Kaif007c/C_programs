#include <stdio.h>
int main(void) {
    long long n;
    int m=0;
    scanf("%lld",&n);
    if(n<0)n=-n;
    do {
        int d=n%10;
        if(d>m)m=d;
        n/=10;
    }
    while(n);
    printf("%d\n",m);
    return 0;
}
