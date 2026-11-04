#include <stdio.h>
int main(void) {
    int n,a[1000];
    long long sum=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum=%lld Average=%.2f\n",sum,(double)sum/n);
    return 0;
}
