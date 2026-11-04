#include <stdio.h>
int main(void) {
    int r1,c1,r2,c2,a[20][20],b[20][20];
    long long x[20][20]= {
        0
    }
    ;
    scanf("%d%d",&r1,&c1);
    if(r1<1||r1>20||c1<1||c1>20)return 1;
    for(int i=0; i<r1; i++)for(int j=0; j<c1; j++)scanf("%d",&a[i][j]);
    scanf("%d%d",&r2,&c2);
    if(r2<1||r2>20||c2<1||c2>20||c1!=r2)return 1;
    for(int i=0; i<r2; i++)for(int j=0; j<c2; j++)scanf("%d",&b[i][j]);
    for(int i=0; i<r1; i++)for(int j=0; j<c2; j++)for(int k=0; k<c1; k++)x[i][j]+=(long long)a[i][k]*b[k][j];
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++)printf("%lld ",x[i][j]);
        puts("");
    }
    return 0;
}
