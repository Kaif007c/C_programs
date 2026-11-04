#include <stdio.h>
int main(void)  {
    char s[1000];
    int j=0;
    if(!fgets(s,sizeof s,stdin))return 1;
    for(int i=0; s[i]&&s[i]!='\n'; i++) if(s[i]!=' '&&s[i]!='\t')s[j++]=s[i];
    s[j]='\0';
    puts(s);
    return 0;
}
