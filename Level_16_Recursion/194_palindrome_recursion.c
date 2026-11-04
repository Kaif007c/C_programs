#include <stdio.h>
#include <string.h>
int pal(char*s,int l,int r) {
    if(l>=r)return 1;
    return s[l]==s[r]&&pal(s,l+1,r-1);
}
int main(void) {
    char s[1000];
    fgets(s,sizeof s,stdin);
    int n=(int)strcspn(s,"\n");
    puts(pal(s,0,n-1)?"Palindrome":"Not palindrome");
    return 0;
}
