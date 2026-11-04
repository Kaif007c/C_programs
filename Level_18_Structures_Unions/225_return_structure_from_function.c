#include <stdio.h>
typedef struct {
    int x,y;
}
Point;
Point read_point(void) {
    Point p;
    scanf("%d%d",&p.x,&p.y);
    return p;
}
int main(void) {
    Point p=read_point();
    printf("Point=(%d,%d)\n",p.x,p.y);
    return 0;
}
