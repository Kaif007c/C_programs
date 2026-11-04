#include <stdio.h>
int main(void)  {
    int a,b,temp;
    printf("Enter a and b: ");
    if(scanf("%d%d",&a,&b)!=2)return 1;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d\n",a,b);
    return 0;
}
