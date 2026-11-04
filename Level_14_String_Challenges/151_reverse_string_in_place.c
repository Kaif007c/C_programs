#include <stdio.h>
int main(void) {
    char s[1000];
    if(!fgets(s,sizeof s,stdin))return 1;
    int n=0;
    while(s[n]&&s[n]!='\n')n++;
    for(int i=0; i<n/2; i++) {
        char t=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=t;
    }
    s[n]='\0';
    puts(s);
    return 0;
}
