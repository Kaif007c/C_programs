#include <stdio.h>
int main(void)  {
    char c;
    printf("Enter a character: ");
    if(scanf(" %c",&c)!=1)return 1;
    printf("ASCII value = %d\n",(unsigned char)c);
    return 0;
}
