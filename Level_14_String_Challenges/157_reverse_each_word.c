#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000];
    if(!fgets(s,sizeof s,stdin))return 1;
    int n=(int)strcspn(s,"\n"),i=0;
    while(i<n) {
        while(i<n&&s[i]==' ')i++;
        int j=i;
        while(j<n&&s[j]!=' ')j++;
        for(int l=i,r=j-1; l<r; l++,r--) {
            char t=s[l];
            s[l]=s[r];
            s[r]=t;
        }
        i=j;
    }
    puts(s);
    return 0;
}
