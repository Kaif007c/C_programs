#include <stdio.h>
#include <ctype.h>
int main(void) {
    char a[500],b[500];
    int f[256]= {
        0
    }
    ;
    if(!fgets(a,sizeof a,stdin)||!fgets(b,sizeof b,stdin))return 1;
    for(int i=0; a[i]&&a[i]!='\n'; i++)if(!isspace((unsigned char)a[i]))f[tolower((unsigned char)a[i])]++;
    for(int i=0; b[i]&&b[i]!='\n'; i++)if(!isspace((unsigned char)b[i]))f[tolower((unsigned char)b[i])]--;
    for(int i=0; i<256; i++)if(f[i]) {
        puts("Not anagrams");
        return 0;
    }
    puts("Anagrams");
    return 0;
}
