#include <stdio.h>
int main(void) {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b) {
        int t=a;
        a=b;
        b=t;
    }
    for(int n=a; n<=b; n++) {
        int p=n>=2;
        for(int d=2; d<=n/d&&p; d++)if(n%d==0)p=0;
        if(p)printf("%d ",n);
    }
    puts("");
    return 0;
}
