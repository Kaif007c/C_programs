#include <stdio.h>
int main(void) {
    int choice;
    long long n;
    do {
        printf("\\n1 Count digits  2 Sum digits  3 Reverse  4 Exit\\nChoice: ");
        if(scanf("%d",&choice)!=1)return 1;
        if(choice>=1&&choice<=3) {
            printf("Number: ");
            scanf("%lld",&n);
            long long x=n,rev=0;
            int count=0,sum=0;
            do {
                int d=(int)(x%10);
                if(d<0)d=-d;
                count++;
                sum+=d;
                rev=rev*10+d;
                x/=10;
            }
            while(x);
            if(choice==1)printf("Digits = %d\\n",count);
            else if(choice==2)printf("Digit sum = %d\\n",sum);
            else printf("Reverse = %lld\\n",n<0?-rev:rev);
        }
        else if(choice!=4)puts("Invalid choice");
    }
    while(choice!=4);
    return 0;
}
