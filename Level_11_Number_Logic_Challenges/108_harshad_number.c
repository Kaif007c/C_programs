#include <stdio.h>
int main(void) {
    int n,s=0;
    scanf("%d",&n);
    if(n<=0)return 1;
    for(int x=n; x; x/=10)s+=x%10;
    puts(n%s==0?"Harshad number":"Not Harshad");
    return 0;
}
