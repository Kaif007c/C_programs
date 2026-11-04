#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    if(n<=0)return 1;
    for(int i=1; i<=n; i++)if(n%i==0)printf("%d ",i);
    puts("");
    return 0;
}
