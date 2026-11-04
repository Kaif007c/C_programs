#include <stdio.h>
typedef struct {
    int id,qty;
    char name[50];
    double price;
}
Item;
int main(void) {
    Item a[100];
    int n=0,ch;
    do {
        printf("\\n1 Add 2 List 3 Update quantity 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100)scanf("%d%49s%d%lf",&a[n].id,a[n].name,&a[n].qty,&a[n].price),n++;
        else if(ch==2)for(int i=0; i<n; i++)printf("%d %s qty=%d price=%.2f\\n",a[i].id,a[i].name,a[i].qty,a[i].price);
        else if(ch==3) {
            int id,q;
            scanf("%d%d",&id,&q);
            for(int i=0; i<n; i++)if(a[i].id==id)a[i].qty=q;
        }
    }
    while(ch!=4);
    return 0;
}
