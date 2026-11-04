#include <stdio.h>
#include <limits.h>
int main(void) {
    int n,a[1000];
    long long best=LLONG_MIN;
    int x=0,y=0;
    scanf("%d",&n);
    if(n<2||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++)for(int j=i+1; j<n; j++)if((long long)a[i]*a[j]>best)best=(long long)a[i]*a[j],x=a[i],y=a[j];
    printf("Pair %d,%d product %lld\n",x,y,best);
    return 0;
}
