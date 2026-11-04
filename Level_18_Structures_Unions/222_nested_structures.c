#include <stdio.h>
typedef struct {
    int day,month,year;
}
Date;
typedef struct {
    int id;
    char name[50];
    Date dob;
}
Person;
int main(void) {
    Person p;
    scanf("%d%49s%d%d%d",&p.id,p.name,&p.dob.day,&p.dob.month,&p.dob.year);
    printf("%d %s DOB %02d-%02d-%04d\n",p.id,p.name,p.dob.day,p.dob.month,p.dob.year);
    return 0;
}
