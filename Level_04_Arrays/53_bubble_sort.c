#include <stdio.h>
int main(void) {
    int n,a[1000];
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n-1; i++) {
        int swapped=0;
        for(int j=0; j<n-1-i; j++)if(a[j]>a[j+1]) {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            swapped=1;
        }
        if(!swapped)break;
    }
    for(int i=0; i<n; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
