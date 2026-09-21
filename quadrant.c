#include<stdio.h>
int main()
{
    double x,y;
    printf("X coordinate : ");
    scanf("%lf", &x);
    printf("Y coordinate : ");
    scanf("%lf", &y);

    if(x==0 && y==0)
    {
        printf("(%.1f, %.1f) is in the center", x, y);
    }
    else if(x==0)
    {
        printf("(%.1f, %.1f) is on the Y-axis", x, y);
    }
    else if(y==0)
    {
        printf("(%.1f, %.1f) is on the X-axis", x, y);
    }
    else if(x>0 && y>0)
    {
        printf("(%.1f, %.1f) is in quadrant I", x, y);
    }
    else if(x<0 && y>0)
    {
        printf("(%.1f, %.1f) is in quadrant II", x, y);
    }
    else if(x<0 && y<0)
    {
        printf("(%.1f, %.1f) is in quadrant III", x, y);
    }
    else if(x>0 && y<0)
    {
        printf("(%.1f, %.1f) is in quadrant IV", x, y);
    }

    return 0;

}