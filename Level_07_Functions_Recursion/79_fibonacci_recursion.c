#include <stdio.h>
unsigned long long fib(int n) {
    if(n<2)return (unsigned long long)n;
    return fib(n-1)+fib(n-2);
}
int main(void) {
    int n;
    scanf("%d",&n);
    if(n<0||n>40)return 1;
    for(int i=0; i<n; i++)printf("%llu ",fib(i));
    puts("");
    return 0;
}
