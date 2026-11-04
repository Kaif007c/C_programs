#include <stdio.h>
#include <limits.h>
int main(void) {
    int n,a[1000],bestL=0,bestR=0;
    long long cur=0,best=LLONG_MAX;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++) {
        cur=0;
        for(int j=i; j<n; j++) {
            cur+=a[j];
            if(cur<best)best=cur,bestL=i,bestR=j;
        }
    }
    printf("Minimum sum = %lld; subarray: ",best);
    for(int i=bestL; i<=bestR; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
