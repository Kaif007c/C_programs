#include <stdio.h>
typedef struct {
    char task[100];
    int done;
}
Task;
int main(void) {
    Task t[100];
    int n=0,ch;
    do {
        printf("\\n1 Add 2 List 3 Mark done 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100)scanf("%99s",t[n].task),t[n++].done=0;
        else if(ch==2)for(int i=0; i<n; i++)printf("%d. [%c] %s\n",i+1,t[i].done?'x':' ',t[i].task);
        else if(ch==3) {
            int k;
            scanf("%d",&k);
            if(k>=1&&k<=n)t[k-1].done=1;
        }
    }
    while(ch!=4);
    return 0;
}
