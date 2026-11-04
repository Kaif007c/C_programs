#include <stdio.h>
int main(void) {
    int n,a[1000],e=0,o=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(a[i]%2==0)e++;
        else o++;
    }
    printf("Even=%d Odd=%d\n",e,o);
    return 0;
}
