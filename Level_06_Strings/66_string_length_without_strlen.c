#include <stdio.h>
int main(void)  {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 1;
    int n = 0;
    while (s[n] && s[n] != '\n') n++;
    printf("Length = %d\n", n);
    return 0;
}
