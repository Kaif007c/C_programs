#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    if(n<2)return 1;
    for(int p=2; p<=n/p; p++)while(n%p==0) {
        printf("%d ",p);
        n/=p;
    }
    if(n>1)printf("%d",n);
    puts("");
    return 0;
}
