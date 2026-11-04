#include <stdio.h>
int main(void) {
    int n,a[1000],seen[1000],k=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++) {
        int c=0,done=0;
        for(int j=0; j<n; j++)if(a[j]==a[i])c++;
        for(int j=0; j<k; j++)if(seen[j]==a[i])done=1;
        if(c>1&&!done) {
            printf("%d ",a[i]);
            seen[k++]=a[i];
        }
    }
    puts("");
    return 0;
}
