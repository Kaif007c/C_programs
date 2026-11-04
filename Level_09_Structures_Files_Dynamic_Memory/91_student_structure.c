#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
}
;
int main(void) {
    struct Student s;
    printf("Roll, name (one word), marks: ");
    if(scanf("%d%49s%f",&s.roll,s.name,&s.marks)!=3)return 1;
    printf("Roll: %d\nName: %s\nMarks: %.2f\n",s.roll,s.name,s.marks);
    return 0;
}
