#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50],phone[25];
}
Contact;
int main(void) {
    Contact a[100];
    int n=0,ch;
    do {
        printf("\\n1 Add 2 List 3 Search 4 Delete 5 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100)scanf("%49s%24s",a[n].name,a[n].phone),n++;
        else if(ch==2)for(int i=0; i<n; i++)printf("%s %s\n",a[i].name,a[i].phone);
        else if(ch==3) {
            char key[50];
            scanf("%49s",key);
            int f=0;
            for(int i=0; i<n; i++)if(strcmp(key,a[i].name)==0)printf("%s\n",a[i].phone),f=1;
            if(!f)puts("Not found");
        }
        else if(ch==4) {
            char key[50];
            scanf("%49s",key);
            for(int i=0; i<n; i++)if(strcmp(key,a[i].name)==0) {
                for(int j=i; j<n-1; j++)a[j]=a[j+1];
                n--;
                break;
            }
        }
    }
    while(ch!=5);
    return 0;
}
