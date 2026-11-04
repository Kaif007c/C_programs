#include <stdio.h>
int main(void) {
    int n,a[1000],ans=0,found=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n&&!found; i++)for(int j=i+1; j<n; j++)if(a[i]==a[j]) {
        ans=a[i];
        found=1;
        break;
    }
    if(found)printf("%d\n",ans);
    else puts("No repeating element");
    return 0;
}
