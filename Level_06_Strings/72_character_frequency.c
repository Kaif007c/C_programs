#include <stdio.h>
int main(void)  {
    char s[1000];
    int f[256]= {
        0
    }
    ;
    if (!fgets(s, sizeof s, stdin)) return 1;
    for (int i=0; s[i] && s[i]!='\n'; i++) f[(unsigned char)s[i]]++;
    for (int i=0; i<256; i++) if(f[i]) printf("'%c' : %d\n", i, f[i]);
    return 0;
}
