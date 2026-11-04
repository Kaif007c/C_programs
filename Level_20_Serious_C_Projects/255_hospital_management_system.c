#include <stdio.h>
typedef struct {
    int id,age;
    char name[50],diagnosis[80];
}
Patient;
int main(void) {
    Patient p[100];
    int n=0,ch;
    do {
        printf("\\n1 Register 2 List 3 Search ID 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100)scanf("%d%49s%d%79s",&p[n].id,p[n].name,&p[n].age,p[n].diagnosis),n++;
        else if(ch==2)for(int i=0; i<n; i++)printf("%d %s age %d %s\n",p[i].id,p[i].name,p[i].age,p[i].diagnosis);
        else if(ch==3) {
            int id;
            scanf("%d",&id);
            int f=0;
            for(int i=0; i<n; i++)if(p[i].id==id)printf("%s %s\n",p[i].name,p[i].diagnosis),f=1;
            if(!f)puts("Not found");
        }
    }
    while(ch!=4);
    return 0;
}
