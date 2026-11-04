#include <stdio.h>
int main(void)  {
    double a,b;
    printf("Enter two numbers: ");
    if(scanf("%lf%lf",&a,&b)!=2)return 1;
    printf("Addition = %.2f\nSubtraction = %.2f\nMultiplication = %.2f\n",a+b,a-b,a*b);
    if(b!=0) printf("Division = %.2f\nRemainder (integers only) = %d\n",a/b,(int)a%(int)b);
    else puts("Division by zero is undefined.");
    return 0;
}
