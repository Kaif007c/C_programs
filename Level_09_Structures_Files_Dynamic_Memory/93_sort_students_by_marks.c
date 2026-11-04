#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
}
;
int main(void) {
    struct Student s[100],t;
    int n;
    scanf("%d",&n);
    if(n<1||n>100)return 1;
    for(int i=0; i<n; i++)scanf("%d%49s%f",&s[i].roll,s[i].name,&s[i].marks);
    for(int i=0; i<n-1; i++)for(int j=0; j<n-1-i; j++)if(s[j].marks<s[j+1].marks) {
        t=s[j];
        s[j]=s[j+1];
        s[j+1]=t;
    }
    for(int i=0; i<n; i++)printf("%d %-20s %.2f\n",s[i].roll,s[i].name,s[i].marks);
    return 0;
}
