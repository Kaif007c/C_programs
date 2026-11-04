#include <stdio.h>
int main(void) {
    char s[1000],a,b;
    if(!fgets(s,sizeof s,stdin))return 1;
    scanf(" %c %c",&a,&b);
    for(int i=0; s[i]&&s[i]!='\n'; i++)if(s[i]==a)s[i]=b;
    puts(s);
    return 0;
}
