#include <stdio.h>
#include <math.h>
int main(void)  {
    double p,r,t;
    printf("Principal, annual rate (%%), time (years): ");
    if(scanf("%lf%lf%lf",&p,&r,&t)!=3||p<0||t<0)return 1;
    double si=p*r*t/100.0, amount=p*pow(1+r/100.0,t);
    printf("Simple interest = %.2f\nCompound interest = %.2f\n",si,amount-p);
    return 0;
}
