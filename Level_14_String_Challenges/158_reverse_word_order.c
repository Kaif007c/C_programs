#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000],w[100][100];
    int n=0;
    if(!fgets(s,sizeof s,stdin))return 1;
    char *p=strtok(s," \t\n");
    while(p&&n<100) {
        snprintf(w[n++],100,"%s",p);
        p=strtok(NULL," \t\n");
    }
    for(int i=n-1; i>=0; i--)printf("%s%s",w[i],i?" ":"\n");
    if(!n)puts("");
    return 0;
}
