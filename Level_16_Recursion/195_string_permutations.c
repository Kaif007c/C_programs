#include <stdio.h>
#include <string.h>
void perm(char*s,int l,int r) {
    if(l==r) {
        puts(s);
        return;
    }
    for(int i=l; i<=r; i++) {
        char t=s[l];
        s[l]=s[i];
        s[i]=t;
        perm(s,l+1,r);
        t=s[l];
        s[l]=s[i];
        s[i]=t;
    }
}
int main(void) {
    char s[10];
    scanf("%9s",s);
    perm(s,0,(int)strlen(s)-1);
    return 0;
}
