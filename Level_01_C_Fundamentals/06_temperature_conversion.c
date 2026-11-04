#include <stdio.h>
int main(void)  {
    int choice;
    double t;
    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nChoice: ");
    if(scanf("%d",&choice)!=1)return 1;
    printf("Temperature: ");
    if(scanf("%lf",&t)!=1)return 1;
    if(choice==1) printf("%.2f F\n",t*9.0/5.0+32);
    else if(choice==2) printf("%.2f C\n",(t-32)*5.0/9.0);
    else puts("Invalid choice");
    return 0;
}
