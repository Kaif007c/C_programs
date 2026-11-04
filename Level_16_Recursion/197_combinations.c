#include <stdio.h>
void choose(int n,int k,int start,int depth,int out[]) {
    if(depth==k) {
        for(int i=0; i<k; i++)printf("%d ",out[i]);
        puts("");
        return;
    }
    for(int x=start; x<=n-(k-depth)+1; x++) {
        out[depth]=x;
        choose(n,k,x+1,depth+1,out);
    }
}
int main(void) {
    int n,k,out[30];
    scanf("%d%d",&n,&k);
    if(n<0||n>30||k<0||k>n)return 1;
    choose(n,k,1,0,out);
    return 0;
}
