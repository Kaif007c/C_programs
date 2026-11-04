#include <stdio.h>
int main(void)  {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 1;
    char *p = s;
    while (*p && *p != '\n') p++;
    printf("Length = %ld\n", (long)(p - s));
    return 0;
}
