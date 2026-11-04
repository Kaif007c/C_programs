#include <stdio.h>
int main(void) {
    int r,c,a[20][20],top=0,bot,left=0,right;
    scanf("%d%d",&r,&c);
    if(r<1||r>20||c<1||c>20)return 1;
    for(int i=0; i<r; i++)for(int j=0; j<c; j++)scanf("%d",&a[i][j]);
    bot=r-1;
    right=c-1;
    while(top<=bot&&left<=right) {
        for(int j=left; j<=right; j++)printf("%d ",a[top][j]);
        top++;
        for(int i=top; i<=bot; i++)printf("%d ",a[i][right]);
        right--;
        if(top<=bot) {
            for(int j=right; j>=left; j--)printf("%d ",a[bot][j]);
            bot--;
        }
        if(left<=right) {
            for(int i=bot; i>=top; i--)printf("%d ",a[i][left]);
            left++;
        }
    }
    puts("");
    return 0;
}
