#include <stdio.h>
int main(void) {
    int n,a[1000],x;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",a+i);
    scanf("%d",&x);
    for(int *p=a; p<a+n; p++)if(*p==x) {
        printf("Found at index %ld\n",(long)(p-a));
        return 0;
    }
    puts("Not found");
    return 0;
}
