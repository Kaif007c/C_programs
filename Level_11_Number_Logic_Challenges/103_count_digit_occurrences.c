#include <stdio.h>
int main(void) {
    long long n;
    int d,c=0;
    scanf("%lld%d",&n,&d);
    if(d<0||d>9)return 1;
    if(n<0)n=-n;
    do {
        if(n%10==d)c++;
        n/=10;
    }
    while(n);
    printf("%d\n",c);
    return 0;
}
