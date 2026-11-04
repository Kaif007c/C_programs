#include <stdio.h>
int main(void) {
    int n,a[1000];
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++) {
        int c=0;
        for(int j=0; j<n; j++)if(a[i]==a[j])c++;
        if(c==1)printf("%d ",a[i]);
    }
    puts("");
    return 0;
}
