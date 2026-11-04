#include <stdio.h>
int main(void) {
    int n,a[1000],c[3]= {
        0
    }
    ;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(a[i]<0||a[i]>2)return 1;
        c[a[i]]++;
    }
    int k=0;
    for(int v=0; v<3; v++)while(c[v]--)a[k++]=v;
    for(int i=0; i<n; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
