#include <stdio.h>
int next(int n) {
    int s=0;
    while(n) {
        int d=n%10;
        s+=d*d;
        n/=10;
    }
    return s;
}
int main(void) {
    int n;
    scanf("%d",&n);
    if(n<1)return 1;
    int slow=n,fast=n;
    do {
        slow=next(slow);
        fast=next(next(fast));
    }
    while(slow!=fast);
    puts(slow==1?"Happy number":"Not happy");
    return 0;
}
