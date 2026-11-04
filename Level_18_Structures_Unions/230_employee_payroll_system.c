#include <stdio.h>
typedef struct {
    int id;
    char name[50];
    double basic;
}
Employee;
int main(void) {
    Employee e[100];
    int n;
    scanf("%d",&n);
    if(n<1||n>100)return 1;
    for(int i=0; i<n; i++)scanf("%d%49s%lf",&e[i].id,e[i].name,&e[i].basic);
    for(int i=0; i<n; i++) {
        double hra=.20*e[i].basic,da=.10*e[i].basic,pf=.12*e[i].basic,gross=e[i].basic+hra+da,net=gross-pf;
        printf("%d %s Gross=%.2f PF=%.2f Net=%.2f\n",e[i].id,e[i].name,gross,pf,net);
    }
    return 0;
}
