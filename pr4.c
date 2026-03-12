// question 1
#include <stdio.h>
int main()
{
    int i, j;

    for (i = 41; i <= 45; i++)
    {
        for (j = 41; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// question 2
#include <stdio.h>
int main()
{
    int i, j;
    int count = 11;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}

// question 3
#include <stdio.h>
int main()
{
    int i, j, k;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = i; k <= 5; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}

// question 4
#include <stdio.h>
int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = i; k <= 5; k++)
        {
            if (k % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}

// question 5
#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (j = i; j <= n; j++)
        {
            printf("%d", j);
        }

        for (j = n - 1; j >= i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

// question 6
#include <stdio.h>
int main()
{
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (j = 1; j <= 2 * (n - i); j++)
        {
            printf("  ");
        }

        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}