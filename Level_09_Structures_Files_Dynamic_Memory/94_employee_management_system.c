#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    double salary;
}
;
int main(void) {
    struct Employee e[100];
    int n,ch;
    do {
        printf("\\n1 Add 2 Display 3 Exit\\n");
        if(scanf("%d",&ch)!=1)return 1;
        if(ch==1) {
            if(n>=100) {
                puts("Full");
                continue;
            }
            printf("ID name salary: ");
            scanf("%d%49s%lf",&e[n].id,e[n].name,&e[n].salary);
            n++;
        }
        else if(ch==2) {
            for(int i=0; i<n; i++)printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
        }
    }
    while(ch!=3);
    return 0;
}
