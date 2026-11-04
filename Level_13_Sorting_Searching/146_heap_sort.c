#include <stdio.h>
void heapify(int a[],int n,int i) {
    int m=i,l=2*i+1,r=2*i+2;
    if(l<n&&a[l]>a[m])m=l;
    if(r<n&&a[r]>a[m])m=r;
    if(m!=i) {
        int t=a[i];
        a[i]=a[m];
        a[m]=t;
        heapify(a,n,m);
    }
}
int main(void) {
    int n,a[1000];
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=n/2-1; i>=0; i--)heapify(a,n,i);
    for(int i=n-1; i>0; i--) {
        int t=a[0];
        a[0]=a[i];
        a[i]=t;
        heapify(a,i,0);
    }
    for(int i=0; i<n; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
