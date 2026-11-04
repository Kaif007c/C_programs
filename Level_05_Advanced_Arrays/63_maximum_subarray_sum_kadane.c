#include <stdio.h>
int main(void) {
    int n;
    long long x,best=0,cur=0;
    scanf("%d",&n);
    if(n<1||n>100000)return 1;
    for(int i=0; i<n; i++) {
        scanf("%lld",&x);
        if(i==0)best=cur=x;
        else {
            cur=cur+x> x?cur+x:x;
            if(cur>best)best=cur;
        }
    }
    printf("Maximum subarray sum = %lld\n",best);
    return 0;
}
