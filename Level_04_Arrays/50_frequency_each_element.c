#include <stdio.h>
int main(void) {
    int n,a[1000],done[1000]= {
        0
    }
    ;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++)if(!done[i]) {
        int c=0;
        for(int j=i; j<n; j++)if(a[i]==a[j]) {
            c++;
            done[j]=1;
        }
        printf("%d occurs %d time(s)\\n",a[i],c);
    }
    return 0;
}
