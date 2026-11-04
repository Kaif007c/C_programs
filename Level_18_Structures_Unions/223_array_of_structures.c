#include <stdio.h>
typedef struct {
    int code;
    char item[50];
    float price;
}
Product;
int main(void) {
    Product p[100];
    int n;
    scanf("%d",&n);
    if(n<1||n>100)return 1;
    for(int i=0; i<n; i++)scanf("%d%49s%f",&p[i].code,p[i].item,&p[i].price);
    for(int i=0; i<n; i++)printf("%d %-20s %.2f\n",p[i].code,p[i].item,p[i].price);
    return 0;
}
