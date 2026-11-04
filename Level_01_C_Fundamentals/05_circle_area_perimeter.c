#include <stdio.h>
#define PI 3.141592653589793
int main(void)  {
    double r;
    printf("Radius: ");
    if(scanf("%lf",&r)!=1||r<0)return 1;
    printf("Area = %.2f\nPerimeter = %.2f\n",PI*r*r,2*PI*r);
    return 0;
}
