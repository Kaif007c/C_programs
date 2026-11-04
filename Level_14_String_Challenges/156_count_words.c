#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[1000];
    int count=0,in=0;
    if(!fgets(s,sizeof s,stdin))return 1;
    for(int i=0; s[i]; i++) {
        if(isspace((unsigned char)s[i]))in=0;
        else if(!in) {
            count++;
            in=1;
        }
    }
    printf("Words = %d\n",count);
    return 0;
}
