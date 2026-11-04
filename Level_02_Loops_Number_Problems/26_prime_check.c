#include <stdio.h>
int main(void) {
    int n,prime=1;
    scanf("%d",&n);
    if(n<2)prime=0;
    for(int i=2; i<=n/i&&prime; i++)if(n%i==0)prime=0;
    puts(prime?"Prime":"Not prime");
    return 0;
}
