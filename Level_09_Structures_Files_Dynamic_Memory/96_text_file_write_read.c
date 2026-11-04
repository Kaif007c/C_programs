#include <stdio.h>
int main(void)  {
    char text[500];
    FILE *f=fopen("notes.txt","w");
    if(!f) {
        perror("notes.txt");
        return 1;
    }
    puts("Enter one line:");
    int ch,i=0;
    while((ch=getchar())!='\n' && ch!=EOF && i<499) text[i++]=(char)ch;
    text[i]='\0';
    fprintf(f,"%s\n",text);
    fclose(f);
    f=fopen("notes.txt","r");
    if(!f) {
        perror("notes.txt");
        return 1;
    }
    while(fgets(text,sizeof text,f)) fputs(text,stdout);
    fclose(f);
    return 0;
}
