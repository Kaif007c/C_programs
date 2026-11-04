#include <stdio.h>
int main(void) {
    int n,a[1000],cand=0,count=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(count==0)cand=a[i],count=1;
        else if(a[i]==cand)count++;
        else count--;
    }
    count=0;
    for(int i=0; i<n; i++)if(a[i]==cand)count++;
    if(count>n/2)printf("%d\n",cand);
    else puts("No majority element");
    return 0;
}
