#include <stdio.h>
typedef struct {
    int id;
    char name[50];
}
Record;
int main(void) {
    Record a[100];
    int n,key;
    scanf("%d",&n);
    if(n<1||n>100)return 1;
    for(int i=0; i<n; i++)scanf("%d%49s",&a[i].id,a[i].name);
    scanf("%d",&key);
    for(int i=0; i<n; i++)if(a[i].id==key) {
        printf("%d %s\n",a[i].id,a[i].name);
        return 0;
    }
    puts("Not found");
    return 0;
}
