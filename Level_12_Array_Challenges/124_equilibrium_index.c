#include <stdio.h>
int main(void) {
    int n,a[1000];
    long long total=0,left=0;
    scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        total+=a[i];
    }
    for(int i=0; i<n; i++) {
        total-=a[i];
        if(left==total) {
            printf("Equilibrium index = %d\n",i);
            return 0;
        }
        left+=a[i];
    }
    puts("No equilibrium index");
    return 0;
}
