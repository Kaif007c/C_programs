#include <stdio.h>
int main(void) {
    int c;
    while((c=getchar())!=EOF) {
        if(c>='A'&&c<='Z')c+=32;
        putchar(c);
    }
    return 0;
}
