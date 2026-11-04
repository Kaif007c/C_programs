#include <stdio.h>
int main(void) {
    int pin=1234,entered,tries=0,ch;
    double balance=5000,amt;
    while(tries<3) {
        printf("Enter PIN: ");
        scanf("%d",&entered);
        if(entered==pin)break;
        tries++;
    }
    if(tries==3) {
        puts("Card locked");
        return 0;
    }
    do {
        printf("\\n1 Balance 2 Deposit 3 Withdraw 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1)printf("Balance %.2f\n",balance);
        else if(ch==2||ch==3) {
            scanf("%lf",&amt);
            if(amt<=0)puts("Invalid amount");
            else if(ch==2)balance+=amt;
            else if(amt>balance)puts("Insufficient balance");
            else balance-=amt;
        }
    }
    while(ch!=4);
    return 0;
}
