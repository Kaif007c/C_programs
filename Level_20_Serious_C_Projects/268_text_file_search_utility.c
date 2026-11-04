#include <stdio.h>
#include <string.h>
int main(void) {
    char filename[100],key[100],line[500];
    printf("Filename and search word: ");
    scanf("%99s%99s",filename,key);
    FILE*f=fopen(filename,"r");
    if(!f) {
        perror(filename);
        return 1;
    }
    int no=0,found=0;
    while(fgets(line,sizeof line,f)) {
        no++;
        if(strstr(line,key)) {
            printf("%d: %s",no,line);
            found=1;
        }
    }
    if(!found)puts("No match");
    fclose(f);
    return 0;
}
