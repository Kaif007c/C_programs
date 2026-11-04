#include <stdio.h>
int fact(int n) {
    int f=1;
    for(int i=2; i<=n; i++)f*=i;
    return f;
}
int main(void) {
    int n,x,sum=0;
    scanf("%d",&n);
    if(n<0)return 1;
    x=n;
    do {
        sum+=fact(x%10);
        x/=10;
    }
    while(x);
    puts(sum==n?"Strong number":"Not strong");
    return 0;
}
