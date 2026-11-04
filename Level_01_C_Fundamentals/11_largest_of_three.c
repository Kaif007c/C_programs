#include <stdio.h>
int main(void)  {
    double a,b,c;
    printf("Enter three numbers: ");
    if(scanf("%lf%lf%lf",&a,&b,&c)!=3)return 1;
    double m=a;
    if(b>m)m=b;
    if(c>m)m=c;
    printf("Largest = %.2f\n",m);
    return 0;
}
