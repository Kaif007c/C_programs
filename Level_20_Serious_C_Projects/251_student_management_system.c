#include <stdio.h>
typedef struct {
    int id;
    char name[50];
    float marks;
}
S;
int main(void) {
    S a[100];
    int n=0,ch;
    do {
        printf("\\n1 Add 2 List 3 Search 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100)scanf("%d%49s%f",&a[n].id,a[n].name,&a[n].marks),n++;
        else if(ch==2)for(int i=0; i<n; i++)printf("%d %s %.2f\n",a[i].id,a[i].name,a[i].marks);
        else if(ch==3) {
            int id;
            scanf("%d",&id);
            int f=0;
            for(int i=0; i<n; i++)if(a[i].id==id)printf("%d %s %.2f\n",a[i].id,a[i].name,a[i].marks),f=1;
            if(!f)puts("Not found");
        }
    }
    while(ch!=4);
    return 0;
}
