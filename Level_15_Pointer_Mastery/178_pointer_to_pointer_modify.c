#include <stdio.h>
void set_value(int **p,int x) {
    **p=x;
}
int main(void) {
    int n=10,*p=&n;
    set_value(&p,99);
    printf("%d\n",n);
    return 0;
}
