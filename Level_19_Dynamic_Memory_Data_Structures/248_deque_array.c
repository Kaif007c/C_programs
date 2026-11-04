#include <stdio.h>
#define MAX 100
int main(void) {
    int d[MAX],f=0,r=-1,n=0,ch,x;
    do {
        printf("\\n1 Push front 2 Push rear 3 Pop front 4 Pop rear 5 Display 6 Exit\\n");
        scanf("%d",&ch);
        if(ch==1||ch==2) {
            scanf("%d",&x);
            if(n==MAX)puts("Full");
            else if(ch==1) {
                f=(f-1+MAX)%MAX;
                d[f]=x;
                if(!n)r=f;
                n++;
            }
            else {
                r=(r+1)%MAX;
                d[r]=x;
                if(!n)f=r;
                n++;
            }
        }
        else if(ch==3||ch==4) {
            if(!n)puts("Empty");
            else if(ch==3) {
                printf("%d\n",d[f]);
                f=(f+1)%MAX;
                n--;
            }
            else {
                printf("%d\n",d[r]);
                r=(r-1+MAX)%MAX;
                n--;
            }
        }
        else if(ch==5) {
            for(int i=0; i<n; i++)printf("%d ",d[(f+i)%MAX]);
            puts("");
        }
    }
    while(ch!=6);
    return 0;
}
