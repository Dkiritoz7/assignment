#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2;
    char ch1,ch2,ch3;
    double y;
    scanf("%d%c%lf%c%c%d",&x1,&ch1,&y,&ch2,&ch3,&x2);
    printf("%d,%c,%.1lf,%c,%c,%d",x1,ch1,y,ch2,ch3,x2);
    return 0;
}