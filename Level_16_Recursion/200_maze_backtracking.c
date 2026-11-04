#include <stdio.h>
#define N 20
int a[N][N],vis[N][N],path[N][N],n;
int solve(int r,int c) {
    if(r<0||c<0||r>=n||c>=n||a[r][c]==0||vis[r][c])return 0;
    vis[r][c]=1;
    path[r][c]=1;
    if(r==n-1&&c==n-1)return 1;
    if(solve(r+1,c)||solve(r,c+1)||solve(r-1,c)||solve(r,c-1))return 1;
    path[r][c]=0;
    return 0;
}
int main(void) {
    scanf("%d",&n);
    if(n<1||n>N)return 1;
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)scanf("%d",&a[i][j]);
    if(!solve(0,0)) {
        puts("No path");
        return 0;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)printf("%d ",path[i][j]);
        puts("");
    }
    return 0;
}
