#include <stdio.h>
int main(void) {
    char s[1000];
    if(!fgets(s,sizeof s,stdin))return 1;
    char *l=s,*r=s;
    while(*r&&*r!='\n')r++;
    if(r>s)r--;
    while(l<r) {
        char t=*l;
        *l++=*r;
        *r--=t;
    }
    puts(s);
    return 0;
}
