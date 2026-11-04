#include <stdio.h>
typedef struct {
    int pnr,seat;
    char name[50];
}
Ticket;
int main(void) {
    Ticket t[100];
    int n=0,next=1001,ch;
    do {
        printf("\\n1 Book 2 View 3 Cancel 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100) {
            t[n].pnr=next++;
            t[n].seat=n+1;
            scanf("%49s",t[n].name);
            printf("Booked PNR=%d Seat=%d\n",t[n].pnr,t[n].seat);
            n++;
        }
        else if(ch==2)for(int i=0; i<n; i++)printf("PNR %d Seat %d %s\n",t[i].pnr,t[i].seat,t[i].name);
        else if(ch==3) {
            int id;
            scanf("%d",&id);
            int f=0;
            for(int i=0; i<n; i++)if(t[i].pnr==id) {
                for(int j=i; j<n-1; j++)t[j]=t[j+1];
                n--;
                f=1;
                break;
            }
            puts(f?"Cancelled":"PNR not found");
        }
    }
    while(ch!=4);
    return 0;
}
