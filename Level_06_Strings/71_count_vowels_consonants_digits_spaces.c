#include <stdio.h>
#include <ctype.h>
int main(void)  {
    char s[1000];
    int v=0,c=0,d=0,sp=0;
    if (!fgets(s, sizeof s, stdin)) return 1;
    for (int i=0; s[i] && s[i]!='\n'; i++)  {
        unsigned char x=(unsigned char)s[i];
        if (isalpha(x))  {
            char z=(char)tolower(x);
            if(z=='a'||z=='e'||z=='i'||z=='o'||z=='u')v++;
            else c++;
        }
        else if (isdigit(x)) d++;
        else if (x==' ') sp++;
    }
    printf("Vowels=%d Consonants=%d Digits=%d Spaces=%d\n",v,c,d,sp);
    return 0;
}
