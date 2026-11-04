#include <stdio.h>
typedef struct {
    int id;
    char name[50];
    double salary;
}
Employee;
int main(void) {
    Employee a[100],t;
    int n;
    scanf("%d",&n);
    if(n<1||n>100)return 1;
    for(int i=0; i<n; i++)scanf("%d%49s%lf",&a[i].id,a[i].name,&a[i].salary);
    for(int i=0; i<n-1; i++)for(int j=0; j<n-1-i; j++)if(a[j].salary>a[j+1].salary)t=a[j],a[j]=a[j+1],a[j+1]=t;
    for(int i=0; i<n; i++)printf("%d %s %.2f\n",a[i].id,a[i].name,a[i].salary);
    return 0;
}
