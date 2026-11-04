#include <stdio.h>
#define MAX 100
int main(void) {
    int q[MAX],f=0,r=-1,ch,x;
    do {
        printf("\\n1 Enqueue 2 Dequeue 3 Display 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1) {
            scanf("%d",&x);
            if(r==MAX-1)puts("Full");
            else q[++r]=x;
        }
        else if(ch==2) {
            if(f>r)puts("Empty");
            else printf("%d\n",q[f++]);
        }
        else if(ch==3) {
            for(int i=f; i<=r; i++)printf("%d ",q[i]);
            puts("");
        }
    }
    while(ch!=4);
    return 0;
}
