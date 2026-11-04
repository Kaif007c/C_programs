#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char s[1000];
    if(!fgets(s,sizeof s,stdin))return 1;
    int best=0,bs=0,i=0,n=(int)strcspn(s,"\n");
    while(i<n) {
        while(i<n&&!isalnum((unsigned char)s[i]))i++;
        int st=i;
        while(i<n&&isalnum((unsigned char)s[i]))i++;
        if(i-st>best)best=i-st,bs=st;
    }
    printf("%.*s\n",best,s+bs);
    return 0;
}
