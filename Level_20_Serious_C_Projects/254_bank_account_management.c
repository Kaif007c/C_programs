#include <stdio.h>
typedef struct {
    int number;
    char name[50];
    double balance;
}
Account;
int main(void) {
    Account a[100];
    int n=0,ch;
    do {
        printf("\\n1 Open 2 Deposit 3 Withdraw 4 View 5 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100) {
            scanf("%d%49s%lf",&a[n].number,a[n].name,&a[n].balance);
            n++;
        }
        else if(ch>=2&&ch<=3) {
            int id;
            double x;
            scanf("%d%lf",&id,&x);
            int f=0;
            for(int i=0; i<n; i++)if(a[i].number==id) {
                f=1;
                if(x<=0)puts("Amount must be positive");
                else if(ch==2)a[i].balance+=x;
                else if(a[i].balance>=x)a[i].balance-=x;
                else puts("Insufficient funds");
            }
            if(!f)puts("Account not found");
        }
        else if(ch==4)for(int i=0; i<n; i++)printf("%d %s balance %.2f\n",a[i].number,a[i].name,a[i].balance);
    }
    while(ch!=5);
    return 0;
}
