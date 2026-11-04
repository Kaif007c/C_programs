#include <stdio.h>
#include <string.h>
int main(void)  {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 1;
    int n = (int)strcspn(s, "\n");
    for (int i = n - 1; i >= 0; i--) putchar(s[i]);
    putchar('\n');
    return 0;
}
