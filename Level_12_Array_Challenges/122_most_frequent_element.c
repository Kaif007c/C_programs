#include <stdio.h>
int main(void) {
    int n,a[1000],best=0,max=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++) {
        int c=0;
        for(int j=0; j<n; j++)if(a[i]==a[j])c++;
        if(c>max) {
            max=c;
            best=a[i];
        }
    }
    printf("Element %d occurs %d times\n",best,max);
    return 0;
}
