#include <stdio.h>
int main(void) {
    int n,a[1000],leader;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    leader=a[n-1];
    printf("%d ",leader);
    for(int i=n-2; i>=0; i--)if(a[i]>=leader) {
        leader=a[i];
        printf("%d ",leader);
    }
    puts("(printed right-to-left)");
    return 0;
}
