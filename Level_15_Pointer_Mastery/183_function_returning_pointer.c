#include <stdio.h>
#include <stdlib.h>
int *create_int(int value) {
    int*p=malloc(sizeof *p);
    if(p)*p=value;
    return p;
}
int main(void) {
    int*p=create_int(42);
    if(!p)return 1;
    printf("%d\n",*p);
    free(p);
    return 0;
}
