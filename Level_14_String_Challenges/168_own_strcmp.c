#include <stdio.h>
int mycmp(const char*a,const char*b) {
    while(*a&&*a==*b)a++,b++;
    return (unsigned char)*a-(unsigned char)*b;
}
int main(void) {
    char a[500],b[500];
    fgets(a,sizeof a,stdin);
    fgets(b,sizeof b,stdin);
    for(int i=0; a[i]; i++)if(a[i]=='\n')a[i]=0;
    for(int i=0; b[i]; i++)if(b[i]=='\n')b[i]=0;
    int x=mycmp(a,b);
    puts(x==0?"Equal":x<0?"First is smaller":"First is greater");
    return 0;
}
