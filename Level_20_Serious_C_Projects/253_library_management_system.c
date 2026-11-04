#include <stdio.h>
typedef struct {
    int id;
    char title[80];
    int issued;
}
Book;
int main(void) {
    Book b[100];
    int n=0,ch;
    do {
        printf("\\n1 Add book 2 List 3 Issue 4 Return 5 Exit\\n");
        scanf("%d",&ch);
        if(ch==1&&n<100)scanf("%d%79s",&b[n].id,b[n].title),b[n++].issued=0;
        else if(ch==2)for(int i=0; i<n; i++)printf("%d %s %s\n",b[i].id,b[i].title,b[i].issued?"Issued":"Available");
        else if(ch==3||ch==4) {
            int id;
            scanf("%d",&id);
            int f=0;
            for(int i=0; i<n; i++)if(b[i].id==id)b[i].issued=(ch==3),f=1;
            if(!f)puts("Book not found");
        }
    }
    while(ch!=5);
    return 0;
}
