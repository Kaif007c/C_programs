#include <stdio.h>
int main(void) {
    char s[1000];
    int f[256]= {
        0
    }
    ;
    if(!fgets(s,sizeof s,stdin))return 1;
    for(int i=0; s[i]&&s[i]!='\n'; i++) {
        unsigned char c=s[i];
        if(f[c]) {
            printf("%c\n",c);
            return 0;
        }
        f[c]=1;
    }
    puts("None");
    return 0;
}
