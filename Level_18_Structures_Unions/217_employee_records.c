#include <stdio.h>
typedef struct {
    int id;
    char name[60];
    double salary;
}
Employee;
int main(void) {
    Employee e[100];
    int n;
    scanf("%d",&n);
    if(n<1||n>100)return 1;
    for(int i=0; i<n; i++)scanf("%d%59s%lf",&e[i].id,e[i].name,&e[i].salary);
    for(int i=0; i<n; i++)printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
    return 0;
}
