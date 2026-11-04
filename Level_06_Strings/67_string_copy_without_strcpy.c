#include <stdio.h>
int main(void)  {
    char s[500], d[500];
    int i = 0;
    if (!fgets(s, sizeof s, stdin)) return 1;
    while (s[i] && s[i] != '\n')  {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    printf("Copy: %s\n", d);
    return 0;
}
