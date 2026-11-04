#include <stdio.h>
struct DataS {
    int i;
    float f;
    char c;
}
;
union DataU {
    int i;
    float f;
    char c;
}
;
int main(void) {
    struct DataS s= {
        10,2.5f,'A'
    }
    ;
    union DataU u;
    u.i=10;
    printf("Structure size=%zu values=%d %.1f %c\n",sizeof s,s.i,s.f,s.c);
    printf("Union size=%zu active member i=%d\n",sizeof u,u.i);
    u.f=2.5f;
    printf("Now union active member f=%.1f\n",u.f);
    return 0;
}
