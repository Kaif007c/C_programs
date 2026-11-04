#include <stdio.h>
int main(void) {
    const char*q[]= {
        "C language was developed by?","Which symbol ends a C statement?","Which function is program entry point?"
    }
    ;
    const char*opts[][3]= {
        {
            "Dennis Ritchie","James Gosling","Bjarne Stroustrup"
        }
        , {
            ";",":",","
        }
        , {
            "main()","start()","run()"
        }
    }
    ;
    int ans[]= {
        1,1,1
    }
    ,score=0,x;
    for(int i=0; i<3; i++) {
        printf("\\n%s\\n",q[i]);
        for(int j=0; j<3; j++)printf("%d. %s\\n",j+1,opts[i][j]);
        scanf("%d",&x);
        if(x==ans[i])score++;
    }
    printf("Score: %d/3\n",score);
    return 0;
}
