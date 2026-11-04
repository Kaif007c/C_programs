#include <stdio.h>
int main(void)  {
    double a,b;
    char op;
    printf("Enter expression (e.g. 8 + 2): ");
    if(scanf("%lf %c %lf",&a,&op,&b)!=3)return 1;
    switch(op) {
        case '+':printf("%.2f\n",a+b);
        break;
        case '-':printf("%.2f\n",a-b);
        break;
        case '*':printf("%.2f\n",a*b);
        break;
        case '/':if(b==0)puts("Cannot divide by zero");
        else printf("%.2f\n",a/b);
        break;
        default:puts("Invalid operator");
    }
    return 0;
}
