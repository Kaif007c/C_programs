#include <stdio.h>
int main(void) {
    int n,a[1000],x,pos=-1;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int i=0; i<n; i++)if(a[i]==x) {
        pos=i;
        break;
    }
    if(pos<0)puts("Not found");
    else printf("Found at index %d\n",pos);
    return 0;
}
