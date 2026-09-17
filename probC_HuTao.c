#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    char arah1,arah2,arah3,arah4;
    int jar1,jar2,jar3,jar4;

    if (scanf("%d %d", &x1,&y1)!=2) return 0;
    if (scanf("%d %d", &x2,&y2)!=2) return 0;
    if (scanf("%d %d", &x3,&y3)!=2) return 0;

    if (scanf(" %c %d", &arah1,&jar1) !=2) return 0;
    if (scanf(" %c %d", &arah2,&jar2) !=2) return 0;
    if (scanf(" %c %d", &arah3,&jar3) !=2) return 0;
    if (scanf(" %c %d", &arah4,&jar4) !=2) return 0;

    // posisi awal
    int x=0, y=0;
    int sobek=0;

    //jalan pertama
    if (arah1 == 'W')
    {
        y+= jar1;
    }
    else if (arah1 == 'A')
    {
        x-= jar1;
    }
    else if (arah1 == 'S')
    {
        y-= jar1;
    }
    else if (arah1 == 'D')
    {
        x+= jar1;
    }

    if ((x==x1&&y==y1) || (x==x2&&y==y2) || (x==x3&&y==y3))
    {
        sobek++;
    }

    // jalan kedua
    if (arah2 == 'W')
    {
        y+= jar2;
    }
    else if (arah2 == 'A')
    {
        x-= jar2;
    }
    else if (arah2 == 'S')
    {
        y-= jar2;
    }
    else if (arah2 == 'D')
    {
        x+= jar2;
    }

    if ((x==x1&&y==y1) || (x==x2&&y==y2) || (x==x3&&y==y3))
    {
        sobek++;
    }

    if (arah3 == 'W')
    {
        y+= jar3;
    }
    else if (arah3 == 'A')
    {
        x-= jar3;
    }
    else if (arah3 == 'S')
    {
        y-= jar3;
    }
    else if (arah3 == 'D')
    {
        x+= jar3;
    }

    if ((x==x1&&y==y1) || (x==x2&&y==y2) || (x==x3&&y==y3))
    {
        sobek++;
    }

    if (arah4 == 'W')
    {
        y+= jar4;
    }
    else if (arah4 == 'A')
    {
        x-= jar4;
    }
    else if (arah4 == 'S')
    {
        y-= jar4;
    }
    else if (arah4 == 'D')
    {
        x+= jar4;
    }

    if ((x==x1&&y==y1) || (x==x2&&y==y2) || (x==x3&&y==y3))
    {
        sobek++;
    }

    if (sobek>0)
    {
        printf("%d\n", sobek);
    }
    else
    {
        printf("Aku kangen kamu Zhong Li\n");
    }

    return 0;
}