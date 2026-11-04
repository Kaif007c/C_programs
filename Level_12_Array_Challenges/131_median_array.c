#include <stdio.h>
int main(void) {
    int n,a[1000];
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=1; i<n; i++) {
        int x=a[i],j=i-1;
        while(j>=0&&a[j]>x) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    if(n%2)printf("Median = %.2f\n",(double)a[n/2]);
    else printf("Median = %.2f\n",(a[n/2-1]/2.0+a[n/2]/2.0));
    return 0;
}
