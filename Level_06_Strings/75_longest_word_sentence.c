#include <stdio.h>
#include <ctype.h>
int main(void)  {
    char s[1000];
    if(!fgets(s,sizeof s,stdin))return 1;
    int best=0,bstart=0,i=0;
    while(s[i] && s[i]!='\n')  {
        while(s[i] && s[i]!='\n' && !isalnum((unsigned char)s[i])) i++;
        int start=i;
        while(s[i] && s[i]!='\n' && isalnum((unsigned char)s[i])) i++;
        if(i-start>best) {
            best=i-start;
            bstart=start;
        }
    }
    if(best) printf("Longest word: %.*s\n",best,s+bstart);
    else puts("No word found");
    return 0;
}
