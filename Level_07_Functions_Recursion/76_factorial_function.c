#include <stdio.h>
unsigned long long factorial(int n) {
    unsigned long long f=1;
    for(int i=2; i<=n; i++)f*=i;
    return f;
}
int main(void) {
    int n;
    scanf("%d",&n);
    if(n<0||n>20)return 1;
    printf("%llu\n",factorial(n));
    return 0;
}
