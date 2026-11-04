#include <stdio.h>
int main(void) {
    int a,b;
    scanf("%d%d",&a,&b);
    int *p=&a,*q=&b;
    printf("Maximum = %d\n",*p>*q?*p:*q);
    return 0;
}
