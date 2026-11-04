#include <stdio.h>
int main(void) {
    int r,c,a[50][50],x;
    scanf("%d%d",&r,&c);
    if(r<1||r>50||c<1||c>50)return 1;
    for(int i=0; i<r; i++)for(int j=0; j<c; j++)scanf("%d",&a[i][j]);
    scanf("%d",&x);
    int i=0,j=c-1;
    while(i<r&&j>=0) {
        if(a[i][j]==x) {
            printf("Found at %d,%d\n",i,j);
            return 0;
        }
        if(a[i][j]>x)j--;
        else i++;
    }
    puts("Not found");
    return 0;
}
