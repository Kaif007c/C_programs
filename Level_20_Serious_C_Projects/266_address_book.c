#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50],phone[25],email[80];
}
Entry;
int main(void) {
    Entry a[100];
    int n=0,ch;
    do {
        printf("\\n1 Add 2 List 3 Search 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100)scanf("%49s%24s%79s",a[n].name,a[n].phone,a[n].email),n++;
        else if(ch==2)for(int i=0; i<n; i++)printf("%s %s %s\n",a[i].name,a[i].phone,a[i].email);
        else if(ch==3) {
            char s[50];
            scanf("%49s",s);
            int f=0;
            for(int i=0; i<n; i++)if(strcmp(s,a[i].name)==0)printf("%s %s\n",a[i].phone,a[i].email),f=1;
            if(!f)puts("Not found");
        }
    }
    while(ch!=4);
    return 0;
}
