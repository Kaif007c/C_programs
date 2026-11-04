#include <stdio.h>
int gcd(int a,int b) {
    if(a<0)a=-a;
    if(b<0)b=-b;
    while(b) {
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main(void) {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("GCD = %d\n",gcd(a,b));
    return 0;
}
