#include <stdio.h>
int main(void) {
    int n,a[1000],*p=a;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",p+i);
    for(int *q=p; q<p+n; q++)printf("%d ",*q);
    puts("");
    return 0;
}
