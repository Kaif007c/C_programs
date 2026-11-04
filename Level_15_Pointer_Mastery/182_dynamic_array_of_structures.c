#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int id;
    char name[50];
}
Person;
int main(void) {
    int n;
    scanf("%d",&n);
    if(n<1||n>10000)return 1;
    Person*p=malloc((size_t)n*sizeof *p);
    if(!p)return 1;
    for(int i=0; i<n; i++)scanf("%d%49s",&p[i].id,p[i].name);
    for(int i=0; i<n; i++)printf("%d %s\n",p[i].id,p[i].name);
    free(p);
    return 0;
}
