#include <stdio.h>
int main(void) {
    char s[1000];
    int f[256]= {
        0
    }
    ,printed[256]= {
        0
    }
    ;
    if(!fgets(s,sizeof s,stdin))return 1;
    for(int i=0; s[i]&&s[i]!='\n'; i++)f[(unsigned char)s[i]]++;
    for(int i=0; s[i]&&s[i]!='\n'; i++) {
        unsigned char c=s[i];
        if(f[c]>1&&!printed[c]) {
            printf("%c ",c);
            printed[c]=1;
        }
    }
    puts("");
    return 0;
}
