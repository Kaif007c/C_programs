#include <stdio.h>
int main(void) {
    long long n,p=1,out=0;
    int d;
    scanf("%lld%d",&n,&d);
    if(d<0||d>9)return 1;
    int neg=n<0;
    if(neg)n=-n;
    while(n) {
        int x=n%10;
        if(x!=d) {
            out+=x*p;
            p*=10;
        }
        n/=10;
    }
    printf("%s%lld\n",neg?"-":"",out);
    return 0;
}
