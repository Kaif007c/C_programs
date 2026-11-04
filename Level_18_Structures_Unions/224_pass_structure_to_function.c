#include <stdio.h>
typedef struct {
    int roll;
    char name[50];
    float marks;
}
Student;
void display(Student s) {
    printf("%d %s %.2f\n",s.roll,s.name,s.marks);
}
int main(void) {
    Student s;
    scanf("%d%49s%f",&s.roll,s.name,&s.marks);
    display(s);
    return 0;
}
