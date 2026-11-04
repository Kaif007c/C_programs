#include <stdio.h>
int main(void) {
    int n,qty;
    double price,total=0;
    char name[50];
    printf("Number of items: ");
    scanf("%d",&n);
    if(n<1||n>100)return 1;
    puts("ItemName Quantity UnitPrice");
    for(int i=0; i<n; i++) {
        scanf("%49s%d%lf",name,&qty,&price);
        if(qty<0||price<0)return 1;
        double sub=qty*price;
        printf("%-20s %5d %8.2f %9.2f\n",name,qty,price,sub);
        total+=sub;
    }
    printf("Total = %.2f\n",total);
    return 0;
}
