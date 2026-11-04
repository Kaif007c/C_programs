#include <stdio.h>
int prime(int n) {
    if(n<2)return 0;
    for(int i=2; i<=n/i; i++)if(n%i==0)return 0;
    return 1;
}
int main(void) {
    int n,count=0,x=1;
    scanf("%d",&n);
    if(n<1)return 1;
    while(count<n) {
        x++;
        if(prime(x))count++;
    }
    printf("%d\n",x);
    return 0;
}
