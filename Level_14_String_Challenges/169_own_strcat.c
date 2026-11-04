#include <stdio.h>
int main(void) {
    char a[1000],b[500];
    if(!fgets(a,sizeof a,stdin)||!fgets(b,sizeof b,stdin))return 1;
    int i=0,j=0;
    while(a[i]&&a[i]!='\n')i++;
    while(b[j]&&b[j]!='\n'&&i<999)a[i++]=b[j++];
    a[i]=0;
    puts(a);
    return 0;
}
