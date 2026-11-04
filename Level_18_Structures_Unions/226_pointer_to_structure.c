#include <stdio.h>
typedef struct {
    int id;
    char name[50];
}
Student;
int main(void) {
    Student s,*p=&s;
    scanf("%d%49s",&p->id,p->name);
    printf("%d %s\n",p->id,p->name);
    return 0;
}
