#include <stdio.h>
int main(void) {
    int n,a[20][20],ok=1;
    scanf("%d",&n);
    if(n<1||n>20)return 1;
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)scanf("%d",&a[i][j]);
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)if(i!=j&&a[i][j]!=0)ok=0;
    puts(ok?"Diagonal matrix":"Not diagonal");
    return 0;
}
