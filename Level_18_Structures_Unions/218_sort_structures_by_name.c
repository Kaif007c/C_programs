#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
}
Person;
int main(void) {
    Person a[100],t;
    int n;
    scanf("%d",&n);
    if(n<1||n>100)return 1;
    for(int i=0; i<n; i++)scanf("%d%49s",&a[i].id,a[i].name);
    for(int i=0; i<n-1; i++)for(int j=0; j<n-1-i; j++)if(strcmp(a[j].name,a[j+1].name)>0)t=a[j],a[j]=a[j+1],a[j+1]=t;
    for(int i=0; i<n; i++)printf("%d %s\n",a[i].id,a[i].name);
    return 0;
}
