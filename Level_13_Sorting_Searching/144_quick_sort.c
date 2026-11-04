#include <stdio.h>
void quick(int a[],int l,int r) {
    if(l>=r)return;
    int p=a[r],i=l-1;
    for(int j=l; j<r; j++)if(a[j]<=p) {
        i++;
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    int t=a[i+1];
    a[i+1]=a[r];
    a[r]=t;
    int q=i+1;
    quick(a,l,q-1);
    quick(a,q+1,r);
}
int main(void) {
    int n,a[1000];
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    quick(a,0,n-1);
    for(int i=0; i<n; i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
