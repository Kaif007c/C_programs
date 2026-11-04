#include <stdio.h>
int main(void)  {
    char src[500], dst[500];
    if (!fgets(src, sizeof src, stdin)) return 1;
    char *s=src, *d=dst;
    while (*s && *s!='\n') *d++=*s++;
    *d='\0';
    printf("%s\n",dst);
    return 0;
}
