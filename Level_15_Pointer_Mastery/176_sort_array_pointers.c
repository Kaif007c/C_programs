#include <stdio.h>
int main(void) {
    int n,a[1000];
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",a+i);
    for(int i=0; i<n-1; i++)for(int *p=a; p<a+n-1-i; p++)if(*p>*(p+1)) {
        int t=*p;
        *p=*(p+1);
        *(p+1)=t;
    }
    for(int i=0; i<n; i++)printf("%d ",*(a+i));
    puts("");
    return 0;
}
