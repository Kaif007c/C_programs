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
int main(void) {
    int(*ops[3])(int,int)= {
        add,sub,mul
    }
    ;
    int a,b,ch;
    scanf("%d%d%d",&a,&b,&ch);
    if(ch<1||ch>3)return 1;
    printf("%d\n",ops[ch-1](a,b));
    return 0;
}
