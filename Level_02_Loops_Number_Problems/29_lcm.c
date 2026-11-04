#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a,b,x,y;
    scanf("%d%d",&a,&b);
    x=abs(a);
    y=abs(b);
    int p=x,q=y;
    while(q) {
        int t=q;
        q=p%q;
        p=t;
    }
    long long l=(p==0)?0:(long long)x/p*y;
    printf("LCM = %lld\n",l);
    return 0;
}
