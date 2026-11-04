#include <stdio.h>
typedef struct {
    int id;
    char name[50];
    double salary;
}
E;
int main(void) {
    E a[100];
    int n=0,ch;
    do {
        printf("\\n1 Add 2 List 3 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100)scanf("%d%49s%lf",&a[n].id,a[n].name,&a[n].salary),n++;
        else if(ch==2)for(int i=0; i<n; i++)printf("%d %s %.2f\n",a[i].id,a[i].name,a[i].salary);
    }
    while(ch!=3);
    return 0;
}
