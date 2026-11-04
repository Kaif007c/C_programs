#include <stdio.h>
int main(void) {
    char s[1000];
    int j=0;
    if(!fgets(s,sizeof s,stdin))return 1;
    for(int i=0; s[i]&&s[i]!='\n'; i++) {
        char c=s[i];
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U')s[j++]=c;
    }
    s[j]='\0';
    puts(s);
    return 0;
}
