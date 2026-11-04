#include <stdio.h>
unsigned long long fact(int n) {
    return n<2?1:(unsigned long long)n*fact(n-1);
}
int main(void) {
    int n;
    scanf("%d",&n);
    if(n<0||n>20)return 1;
    printf("%llu\n",fact(n));
    return 0;
}
