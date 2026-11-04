#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)  {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 1;
    int l = 0, r = (int)strcspn(s, "\n") - 1, ok = 1;
    while (l < r)  {
        while (l < r && !isalnum((unsigned char)s[l])) l++;
        while (l < r && !isalnum((unsigned char)s[r])) r--;
        if (tolower((unsigned char)s[l]) != tolower((unsigned char)s[r])) ok = 0;
        l++;
        r--;
    }
    puts(ok ? "Palindrome" : "Not palindrome");
    return 0;
}
