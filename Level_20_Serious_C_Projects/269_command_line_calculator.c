#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv) {
    if(argc!=4) {
        printf("Usage: %s number operator number\n",argv[0]);
        return 1;
    }
    double a=strtod(argv[1],NULL),b=strtod(argv[3],NULL);
    switch(argv[2][0]) {
        case '+':printf("%g\n",a+b);
        break;
        case '-':printf("%g\n",a-b);
        break;
        case '*':printf("%g\n",a*b);
        break;
        case '/':if(b==0)return puts("Division by zero"),1;
        printf("%g\n",a/b);
        break;
        default:puts("Unknown operator");
        return 1;
    }
    return 0;
}
