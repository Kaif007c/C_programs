#include <stdio.h>
int main(void) {
    long long n,x,rev=0;
    scanf("%lld",&n);
    if(n<0) {
        puts("Not palindrome");
        return 0;
    }
    x=n;
    do {
        rev=rev*10+x%10;
        x/=10;
    }
    while(x);
    puts(n==rev?"Palindrome":"Not palindrome");
    return 0;
}
