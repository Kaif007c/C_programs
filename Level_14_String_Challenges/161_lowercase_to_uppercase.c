#include <stdio.h>
int main(void) {
    int c;
    while((c=getchar())!=EOF) {
        if(c>='a'&&c<='z')c-=32;
        putchar(c);
    }
    return 0;
}
