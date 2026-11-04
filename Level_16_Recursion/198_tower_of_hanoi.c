#include <stdio.h>
void hanoi(int n,char a,char b,char c) {
    if(n==0)return;
    hanoi(n-1,a,c,b);
    printf("Move disk %d: %c -> %c\n",n,a,c);
    hanoi(n-1,b,a,c);
}
int main(void) {
    int n;
    scanf("%d",&n);
    if(n<1||n>20)return 1;
    hanoi(n,'A','B','C');
    return 0;
}
