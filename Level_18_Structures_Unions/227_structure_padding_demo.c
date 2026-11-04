#include <stdio.h>
struct A {
    char c;
    int i;
    char d;
}
;
struct B {
    int i;
    char c;
    char d;
}
;
int main(void) {
    printf("sizeof(struct A) = %zu\nsizeof(struct B) = %zu\n",sizeof(struct A),sizeof(struct B));
    puts("Actual sizes depend on compiler and alignment rules.");
    return 0;
}
