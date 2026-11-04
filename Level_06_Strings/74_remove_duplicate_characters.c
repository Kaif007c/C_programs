#include <stdio.h>
int main(void)  {
    char s[1000];
    int seen[256]= {
        0
    }
    ,j=0;
    if(!fgets(s,sizeof s,stdin))return 1;
    for(int i=0; s[i]&&s[i]!='\n'; i++) {
        unsigned char c=(unsigned char)s[i];
        if(!seen[c]) {
            seen[c]=1;
            s[j++]=s[i];
        }
    }
    s[j]='\0';
    puts(s);
    return 0;
}
