#include <stdio.h>
int main(void) {
    int n,a[20][20];
    scanf("%d",&n);
    if(n<1||n>20)return 1;
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)scanf("%d",&a[i][j]);
    for(int j=0; j<n; j++) {
        for(int i=n-1; i>=0; i--)printf("%d ",a[i][j]);
        puts("");
    }
    return 0;
}
