#include <stdio.h>
char *mystrstr(char *s,char *p) {
    if(!*p)return s;
    for(; *s; s++) {
        char*a=s,*b=p;
        while(*a&&*b&&*a==*b)a++,b++;
        if(!*b)return s;
    }
    return NULL;
}
int main(void) {
    char s[1000],p[300];
    fgets(s,sizeof s,stdin);
    fgets(p,sizeof p,stdin);
    for(int i=0; s[i]; i++)if(s[i]=='\n')s[i]=0;
    for(int i=0; p[i]; i++)if(p[i]=='\n')p[i]=0;
    char*q=mystrstr(s,p);
    if(q)printf("Found at index %ld\n",(long)(q-s));
    else puts("Not found");
    return 0;
}
