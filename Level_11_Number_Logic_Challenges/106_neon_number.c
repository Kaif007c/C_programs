#include <stdio.h>
int main(void) {
    int n,sum=0;
    scanf("%d",&n);
    if(n<0)return 1;
    int sq=n*n;
    do {
        sum+=sq%10;
        sq/=10;
    }
    while(sq);
    puts(sum==n?"Neon number":"Not neon");
    return 0;
}
