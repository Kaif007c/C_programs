#include <stdio.h>
#include <string.h>
int main(void) {
    char pass[40];
    printf("Password: ");
    scanf("%39s",pass);
    if(strcmp(pass,"cpractice2026")!=0) {
        puts("Access denied");
        return 1;
    }
    FILE*f=fopen("private_notes.txt","a+");
    if(!f) {
        perror("file");
        return 1;
    }
    int ch;
    do {
        printf("\\n1 Add line 2 View file 3 Exit\\n");
        scanf("%d",&ch);
        if(ch==1) {
            char line[200];
            scanf(" %199[^\n]",line);
            fprintf(f,"%s\n",line);
            fflush(f);
        }
        else if(ch==2) {
            rewind(f);
            char line[200];
            while(fgets(line,sizeof line,f))fputs(line,stdout);
        }
    }
    while(ch!=3);
    fclose(f);
    return 0;
}
