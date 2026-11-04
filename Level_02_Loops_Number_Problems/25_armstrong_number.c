#include <stdio.h>
int main(void) {
    int n,x,d=0;
    long long sum=0;
    scanf("%d",&n);
    if(n<0) {
        puts("Not Armstrong");
        return 0;
    }
    x=n;
    do {
        d++;
        x/=10;
    }
    while(x);
    x=n;
    do {
        int digit=x%10;
        long long p=1;
        for(int i=0; i<d; i++)p*=digit;
        sum+=p;
        x/=10;
    }
    while(x);
    puts(sum==n?"Armstrong":"Not Armstrong");
    return 0;
}
