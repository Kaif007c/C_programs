#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        long long c=1;
        for(int s=0; s<n-i-1; s++)printf(" ");
        for(int j=0; j<=i; j++) {
            printf("%lld ",c);
            c=c*(i-j)/(j+1);
        }
        puts("");
    }
    return 0;
}
