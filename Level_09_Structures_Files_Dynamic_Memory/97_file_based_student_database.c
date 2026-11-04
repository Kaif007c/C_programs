#include <stdio.h>
#include <string.h>
struct Student {
    int roll;
    char name[50];
    float marks;
}
;
int main(void) {
    FILE *f;
    struct Student s;
    int ch;
    do {
        printf("\\n1 Add 2 List 3 Search 4 Exit\\nChoice: ");
        if(scanf("%d",&ch)!=1)return 1;
        if(ch==1) {
            printf("Roll name marks: ");
            if(scanf("%d%49s%f",&s.roll,s.name,&s.marks)!=3)return 1;
            f=fopen("students.dat","ab");
            if(!f)return 1;
            fwrite(&s,sizeof s,1,f);
            fclose(f);
        }
        else if(ch==2) {
            f=fopen("students.dat","rb");
            if(!f) {
                puts("No database yet");
                continue;
            }
            while(fread(&s,sizeof s,1,f)==1)printf("%d %s %.2f\n",s.roll,s.name,s.marks);
            fclose(f);
        }
        else if(ch==3) {
            int key,found=0;
            scanf("%d",&key);
            f=fopen("students.dat","rb");
            if(!f) {
                puts("No database yet");
                continue;
            }
            while(fread(&s,sizeof s,1,f)==1)if(s.roll==key) {
                printf("%d %s %.2f\n",s.roll,s.name,s.marks);
                found=1;
            }
            fclose(f);
            if(!found)puts("Not found");
        }
    }
    while(ch!=4);
    return 0;
}
