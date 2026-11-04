#include <stdio.h>
#define N 12
int col[N],n,solutions=0;
int safe(int r,int c) {
    for(int i=0; i<r; i++)if(col[i]==c||col[i]-i==c-r||col[i]+i==c+r)return 0;
    return 1;
}
void solve(int r) {
    if(r==n) {
        solutions++;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++)printf("%c ",col[i]==j?'Q':'.');
            puts("");
        }
        puts("");
        return;
    }
    for(int c=0; c<n; c++)if(safe(r,c)) {
        col[r]=c;
        solve(r+1);
    }
}
int main(void) {
    scanf("%d",&n);
    if(n<1||n>N)return 1;
    solve(0);
    printf("Solutions: %d\n",solutions);
    return 0;
}
