#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void) {
    int n,a[1000];
    scanf("%d",&n);
    if(n<2||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=1; i<n; i++) {
        int x=a[i],j=i-1;
        while(j>=0&&a[j]>x) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    long long diff=LLONG_MAX;
    int x=0,y=0;
    for(int i=1; i<n; i++) {
        long long d=(long long)a[i]-a[i-1];
        if(d<diff)diff=d,x=a[i-1],y=a[i];
    }
    printf("Closest pair: %d %d (difference %lld)\n",x,y,diff);
    return 0;
}
