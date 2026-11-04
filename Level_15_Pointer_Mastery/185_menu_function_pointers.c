#include <stdio.h>
int add(int a,int b) {
    return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mul(int a,int b) {
    return a*b;
}
int divide(int a,int b) {
    return b?a/b:0;
}
int main(void) {
    int(*fn[4])(int,int)= {
        add,sub,mul,divide
    }
    ;
    int ch,a,b;
    do {
        printf("\\n1 Add 2 Subtract 3 Multiply 4 Divide 5 Exit\\n");
        scanf("%d",&ch);
        if(ch>=1&&ch<=4) {
            scanf("%d%d",&a,&b);
            if(ch==4&&b==0)puts("Division by zero");
            else printf("Result = %d\n",fn[ch-1](a,b));
        }
    }
    while(ch!=5);
    return 0;
}
