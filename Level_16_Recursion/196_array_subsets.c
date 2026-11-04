#include <stdio.h>
void subsets(int a[],int n,int i,int out[],int k) {
    if(i==n) {
        printf("{ ");
        for(int j=0; j<k; j++)printf("%d ",out[j]);
        puts("}");
        return;
    }
    subsets(a,n,i+1,out,k);
    out[k]=a[i];
    subsets(a,n,i+1,out,k+1);
}
int main(void) {
    int n,a[20],o[20];
    scanf("%d",&n);
    if(n<0||n>20)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    subsets(a,n,0,o,0);
    return 0;
}
