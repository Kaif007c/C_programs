#include <stdio.h>
unsigned long long fib(int n) {
    return n<2?(unsigned long long)n:fib(n-1)+fib(n-2);
}
int main(void) {
    int n;
    scanf("%d",&n);
    if(n<0||n>40)return 1;
    for(int i=0; i<n; i++)printf("%llu ",fib(i));
    puts("");
    return 0;
}
