#include <stdio.h>
int main(void)  {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d",&n)!=1) return 1;
    printf("You entered: %d\n",n);
    return 0;
}
