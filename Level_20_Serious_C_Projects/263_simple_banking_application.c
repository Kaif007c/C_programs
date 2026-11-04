#include <stdio.h>
int main(void) {
    double bal=0,x;
    int ch;
    do {
        printf("\\n1 Deposit 2 Withdraw 3 Balance 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1||ch==2) {
            scanf("%lf",&x);
            if(x<=0)puts("Invalid amount");
            else if(ch==1)bal+=x;
            else if(x>bal)puts("Insufficient funds");
            else bal-=x;
        }
        else if(ch==3)printf("Balance %.2f\n",bal);
    }
    while(ch!=4);
    return 0;
}
