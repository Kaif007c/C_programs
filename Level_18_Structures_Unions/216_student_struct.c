#include <stdio.h>
typedef struct {
    int roll;
    char name[60];
    float marks;
}
Student;
int main(void) {
    Student s;
    scanf("%d%59s%f",&s.roll,s.name,&s.marks);
    printf("%d %s %.2f\n",s.roll,s.name,s.marks);
    return 0;
}
