#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000],p[300];
    if(!fgets(s,sizeof s,stdin)||!fgets(p,sizeof p,stdin))return 1;
    s[strcspn(s,"\n")]=0;
    p[strcspn(p,"\n")]=0;
    int n=(int)strlen(s),m=(int)strlen(p);
    for(int i=0; i<=n-m; i++) {
        int j=0;
        while(j<m&&s[i+j]==p[j])j++;
        if(j==m) {
            printf("Found at index %d\n",i);
            return 0;
        }
    }
    puts("Not found");
    return 0;
}
