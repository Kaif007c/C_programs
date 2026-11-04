#include <stdio.h>
int main(void) {
    int n,c=0;
    scanf("%d",&n);
    if(n<=0)return 1;
    for(int i=1; i<=n; i++)if(n%i==0)c++;
    printf("%d\n",c);
    return 0;
}
