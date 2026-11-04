#include <stdio.h>
int main(void) {
    int n,k,a[1000];
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    scanf("%d",&k);
    if(k<1||k>n)return 1;
    for(int i=1; i<n; i++) {
        int x=a[i],j=i-1;
        while(j>=0&&a[j]>x) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    printf("%d\n",a[k-1]);
    return 0;
}
