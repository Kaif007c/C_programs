#include <stdio.h>
int main(void) {
    int n;
    long long sum=0;
    scanf("%d",&n);
    if(n<1||n>1000000)return 1;
    for(int i=0,x; i<n-1; i++) {
        scanf("%d",&x);
        sum+=x;
    }
    printf("Missing number = %lld\n",(long long)n*(n+1)/2-sum);
    return 0;
}
