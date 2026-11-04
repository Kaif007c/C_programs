#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
}
;
int main(void) {
    struct Student s[100];
    int n,key;
    scanf("%d",&n);
    if(n<1||n>100)return 1;
    for(int i=0; i<n; i++)scanf("%d%49s%f",&s[i].roll,s[i].name,&s[i].marks);
    scanf("%d",&key);
    for(int i=0; i<n; i++)if(s[i].roll==key) {
        printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
        return 0;
    }
    puts("Student not found");
    return 0;
}
