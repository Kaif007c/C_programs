#include <stdio.h>
int main(void) {
    int n,a[1000],best=1,len=1,bs=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=1; i<n; i++) {
        if(a[i]>a[i-1])len++;
        else len=1;
        if(len>best)best=len,bs=i-len+1;
    }
    printf("Length = %d\n",best);
    for(int i=bs; i<bs+best; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
