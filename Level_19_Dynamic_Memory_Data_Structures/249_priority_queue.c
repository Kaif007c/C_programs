#include <stdio.h>
#define MAX 100
typedef struct {
    int value,priority;
}
Item;
int main(void) {
    Item a[MAX];
    int n=0,ch;
    do {
        printf("\\n1 Insert 2 Remove highest priority 3 Display 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1) {
            if(n==MAX)puts("Full");
            else scanf("%d%d",&a[n].value,&a[n].priority),n++;
        }
        else if(ch==2) {
            if(!n)puts("Empty");
            else {
                int b=0;
                for(int i=1; i<n; i++)if(a[i].priority>a[b].priority)b=i;
                printf("Removed %d\n",a[b].value);
                for(int i=b; i<n-1; i++)a[i]=a[i+1];
                n--;
            }
        }
        else if(ch==3)for(int i=0; i<n; i++)printf("value=%d priority=%d\n",a[i].value,a[i].priority);
    }
    while(ch!=4);
    return 0;
}
