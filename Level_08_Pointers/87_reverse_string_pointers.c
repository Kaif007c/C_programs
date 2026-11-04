#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000];
    if(!fgets(s,sizeof s,stdin))return 1;
    char *l=s,*r=s+strcspn(s,"\\n")-1;
    while(l<r) {
        char t=*l;
        *l=*r;
        *r=t;
        l++;
        r--;
    }
    puts(s);
    return 0;
}
