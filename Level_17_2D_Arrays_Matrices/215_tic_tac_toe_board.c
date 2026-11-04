#include <stdio.h>
int main(void) {
    char b[3][3]= {
        {
            '1','2','3'
        }
        , {
            '4','5','6'
        }
        , {
            '7','8','9'
        }
    }
    ;
    int move;
    char player='X';
    for(int turn=0; turn<9; turn++) {
        for(int i=0; i<3; i++)printf(" %c | %c | %c \n---+---+---\n",b[i][0],b[i][1],b[i][2]);
        printf("Player %c, choose 1-9: ",player);
        if(scanf("%d",&move)!=1||move<1||move>9)return 1;
        int r=(move-1)/3,c=(move-1)%3;
        if(b[r][c]=='X'||b[r][c]=='O') {
            puts("Cell occupied");
            turn--;
            continue;
        }
        b[r][c]=player;
        int win=(b[0][0]==player&&b[0][1]==player&&b[0][2]==player)||(b[1][0]==player&&b[1][1]==player&&b[1][2]==player)||(b[2][0]==player&&b[2][1]==player&&b[2][2]==player)||(b[0][0]==player&&b[1][0]==player&&b[2][0]==player)||(b[0][1]==player&&b[1][1]==player&&b[2][1]==player)||(b[0][2]==player&&b[1][2]==player&&b[2][2]==player)||(b[0][0]==player&&b[1][1]==player&&b[2][2]==player)||(b[0][2]==player&&b[1][1]==player&&b[2][0]==player);
        if(win) {
            printf("Player %c wins!\n",player);
            return 0;
        }
        player=player=='X'?'O':'X';
    }
    puts("Draw");
    return 0;
}
