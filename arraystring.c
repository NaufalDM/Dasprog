#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int j = 2; j <= n; j++)
    {
        int prima = 1;

        for(int i = 2; i < j; i++)
        {
            if(j % i == 0)
            {
                prima = 0;
            }
        }

        if(prima == 1)
        {
            printf("* ");
        }
        else
        {
            printf("%d ", j);
        }
    }

    return 0;
}
