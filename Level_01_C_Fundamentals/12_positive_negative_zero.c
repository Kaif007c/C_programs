#include <stdio.h>
int main(void)  {
    double n;
    scanf("%lf",&n);
    if(n>0)puts("Positive");
    else if(n<0)puts("Negative");
    else puts("Zero");
    return 0;
}
