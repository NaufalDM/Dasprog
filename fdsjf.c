#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, g1 = 0, g2 = 0, g3 = 0;
        scanf("%d", &n);

        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);

            if(x % 2 != 0)
            {
                g1++;
            }
            else if(x % 4 == 0)
            {
                g3++;
            }
            else
            {
                g2++;
            }
        }

        int maks = g1;

        if(g2 > maks)
        {
            maks = g2;
        }

        if(g3 > maks)
        {
            maks = g3;
        }

        printf("%d\n", maks);
    }
}
