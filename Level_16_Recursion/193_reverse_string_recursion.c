#include <stdio.h>
void reverse(char*s,int l,int r) {
    if(l>=r)return;
    char t=s[l];
    s[l]=s[r];
    s[r]=t;
    reverse(s,l+1,r-1);
}
int main(void) {
    char s[1000];
    if(!fgets(s,sizeof s,stdin))return 1;
    int n=0;
    while(s[n]&&s[n]!='\n')n++;
    reverse(s,0,n-1);
    s[n]=0;
    puts(s);
    return 0;
}
