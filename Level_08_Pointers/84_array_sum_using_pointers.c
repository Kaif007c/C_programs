#include <stdio.h>
int main(void) {
    int n,a[1000],*p=a;
    long long sum=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",p+i);
    for(int i=0; i<n; i++)sum+=*(p+i);
    printf("Sum = %lld\n",sum);
    return 0;
}
