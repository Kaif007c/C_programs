#include <stdio.h>
int main(void) {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n/2; i++)if(n%i==0)sum+=i;
    puts(n>1&&sum==n?"Perfect number":"Not perfect");
    return 0;
}
