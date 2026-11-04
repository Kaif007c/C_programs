#include <stdio.h>
int main(void)  {
    int a,b;
    printf("Enter a and b: ");
    if(scanf("%d%d",&a,&b)!=2)return 1;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d b=%d\n",a,b);
    return 0;
}
