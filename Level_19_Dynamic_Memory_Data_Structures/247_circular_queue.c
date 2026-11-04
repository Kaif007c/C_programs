#include <stdio.h>
#define MAX 5
int main(void) {
    int q[MAX],f=0,r=-1,count=0,ch,x;
    do {
        printf("\\n1 Enqueue 2 Dequeue 3 Display 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1) {
            scanf("%d",&x);
            if(count==MAX)puts("Full");
            else {
                r=(r+1)%MAX;
                q[r]=x;
                count++;
            }
        }
        else if(ch==2) {
            if(!count)puts("Empty");
            else {
                printf("%d\n",q[f]);
                f=(f+1)%MAX;
                count--;
            }
        }
        else if(ch==3) {
            for(int i=0; i<count; i++)printf("%d ",q[(f+i)%MAX]);
            puts("");
        }
    }
    while(ch!=4);
    return 0;
}
