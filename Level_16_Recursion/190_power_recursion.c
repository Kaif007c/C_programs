#include <stdio.h>
double power(double x,int n) {
    if(n==0)return 1;
    if(n<0)return 1.0/power(x,-n);
    double h=power(x,n/2);
    return n%2?h*h*x:h*h;
}
int main(void) {
    double x;
    int n;
    scanf("%lf%d",&x,&n);
    if(x==0&&n<0)return 1;
    printf("%.6f\n",power(x,n));
    return 0;
}
