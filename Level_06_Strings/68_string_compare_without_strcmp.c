#include <stdio.h>
int main(void)  {
    char a[500], b[500];
    if (!fgets(a, sizeof a, stdin) || !fgets(b, sizeof b, stdin)) return 1;
    int i = 0;
    while (a[i] && a[i] != '\n' && b[i] && b[i] != '\n' && a[i] == b[i]) i++;
    char ca = (a[i] == '\n') ? '\0' : a[i];
    char cb = (b[i] == '\n') ? '\0' : b[i];
    if (ca == cb) puts("Equal");
    else if ((unsigned char)ca < (unsigned char)cb) puts("First string is smaller");
    else puts("First string is greater");
    return 0;
}
