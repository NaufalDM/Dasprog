#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
    {
        printf("YEY GO GET ANOTHER ONE DHIKA!");
    }
    else 
    {
        printf("OH NOOOO");
    }
    return 0;
}