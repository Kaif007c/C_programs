#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000],old[100],nw[100],out[2000]="";
    if(!fgets(s,sizeof s,stdin))return 1;
    scanf("%99s%99s",old,nw);
    char *p=s,*q;
    while((q=strstr(p,old))!=NULL) {
        strncat(out,p,(size_t)(q-p));
        strcat(out,nw);
        p=q+strlen(old);
    }
    strcat(out,p);
    fputs(out,stdout);
    return 0;
}
