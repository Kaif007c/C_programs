#include <stdio.h>
#include <string.h>
struct Contact {
    char name[50],phone[20];
}
;
int main(void) {
    struct Contact c[100];
    int n=0,ch;
    do {
        printf("\\n1 Add 2 List 3 Search 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100) {
            scanf("%49s%19s",c[n].name,c[n].phone);
            n++;
        }
        else if(ch==2) {
            for(int i=0; i<n; i++)printf("%s : %s\n",c[i].name,c[i].phone);
        }
        else if(ch==3) {
            char key[50];
            scanf("%49s",key);
            int found=0;
            for(int i=0; i<n; i++)if(strcmp(c[i].name,key)==0) {
                printf("%s\n",c[i].phone);
                found=1;
            }
            if(!found)puts("Not found");
        }
    }
    while(ch!=4);
    return 0;
}
