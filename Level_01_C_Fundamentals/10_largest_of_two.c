#include <stdio.h>
int main(void)  {
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(a>b)printf("Largest = %.2f\n",a);
    else if(b>a)printf("Largest = %.2f\n",b);
    else puts("Both are equal");
    return 0;
}
