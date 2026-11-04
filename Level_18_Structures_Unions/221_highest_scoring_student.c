#include <stdio.h>
typedef struct {
    int roll;
    char name[50];
    float marks;
}
Student;
int main(void) {
    Student s[100];
    int n,b=0;
    scanf("%d",&n);
    if(n<1||n>100)return 1;
    for(int i=0; i<n; i++) {
        scanf("%d%49s%f",&s[i].roll,s[i].name,&s[i].marks);
        if(s[i].marks>s[b].marks||i==0)b=i;
    }
    printf("Topper: %s (%.2f)\n",s[b].name,s[b].marks);
    return 0;
}
