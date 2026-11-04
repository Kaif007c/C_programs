#include <stdio.h>
int main(void) {
    int n,a[1000];
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=1; i<n; i++) {
        int key=a[i],j=i-1;
        while(j>=0&&a[j]>key) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0; i<n; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
