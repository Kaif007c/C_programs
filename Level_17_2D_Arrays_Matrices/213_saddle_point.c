#include <stdio.h>
int main(void) {
    int r,c,a[20][20],found=0;
    scanf("%d%d",&r,&c);
    if(r<1||r>20||c<1||c>20)return 1;
    for(int i=0; i<r; i++)for(int j=0; j<c; j++)scanf("%d",&a[i][j]);
    for(int i=0; i<r; i++) {
        int mn=a[i][0],col=0;
        for(int j=1; j<c; j++)if(a[i][j]<mn)mn=a[i][j],col=j;
        int max=1;
        for(int k=0; k<r; k++)if(a[k][col]>mn)max=0;
        if(max)printf("Saddle point %d at (%d,%d)\n",mn,i,col),found=1;
    }
    if(!found)puts("No saddle point");
    return 0;
}
