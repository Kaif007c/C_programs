#include <stdio.h>
typedef struct {
    int room,occupied;
    char guest[50];
}
Room;
int main(void) {
    Room r[20];
    for(int i=0; i<20; i++)r[i]=(Room) {
        i+1,0,""
    }
    ;
    int ch;
    do {
        printf("\\n1 Check in 2 Check out 3 Rooms 4 Exit\\n");
        scanf("%d",&ch);
        if(ch==1) {
            int id;
            char name[50];
            scanf("%d%49s",&id,name);
            if(id<1||id>20||r[id-1].occupied)puts("Room unavailable");
            else {
                r[id-1].occupied=1;
                snprintf(r[id-1].guest,50,"%s",name);
            }
        }
        else if(ch==2) {
            int id;
            scanf("%d",&id);
            if(id>=1&&id<=20)r[id-1].occupied=0,r[id-1].guest[0]=0;
        }
        else if(ch==3)for(int i=0; i<20; i++)printf("Room %d: %s %s\n",r[i].room,r[i].occupied?"Occupied":"Free",r[i].guest);
    }
    while(ch!=4);
    return 0;
}
