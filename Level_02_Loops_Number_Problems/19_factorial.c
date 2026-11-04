#include <stdio.h>
int main(void) {
    int n;
    unsigned long long f=1;
    scanf("%d",&n);
    if(n<0||n>20) {
        puts("Enter n from 0 to 20");
        return 1;
    }
    for(int i=2; i<=n; i++)f*=i;
    printf("%llu\n",f);
    return 0;
}
