#include <stdio.h>
typedef struct {
    char category[40];
    double amount;
}
Expense;
int main(void) {
    Expense e[200];
    int n=0,ch;
    do {
        printf("\\n1 Add expense 2 List 3 Total 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<200) {
            scanf("%39s%lf",e[n].category,&e[n].amount);
            if(e[n].amount>=0)n++;
        }
        else if(ch==2)for(int i=0; i<n; i++)printf("%s %.2f\n",e[i].category,e[i].amount);
        else if(ch==3) {
            double s=0;
            for(int i=0; i<n; i++)s+=e[i].amount;
            printf("Total %.2f\n",s);
        }
    }
    while(ch!=4);
    return 0;
}
