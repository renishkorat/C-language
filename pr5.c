// question 1
#include <stdio.h>

int main()
{
    int n, a[10], i;

    printf("enter the number:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}

// question 2
#include <stdio.h>

int main()
{
    int i, largest, n, arr[10];

    printf("enter the size of array:");
    scanf("%d", &n);

    printf("enter element in the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("the largest element =%d\n", largest);

    return 0;
}

// question 3
#include <stdio.h>

int main()
{
    int a[3][3], n, temp = 0, i, j;

    printf("Enter a Value of row: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// question 4
#include <stdio.h>
int main()
{
    int n, m, arr[10][10], i, j, sum;

    printf("Enter the row : ");
    scanf("%d", &n);

    printf("Enter the col : ");
    scanf("%d", &m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < m; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("Sum of row = %d\n", sum);
    }

    for (j = 0; j < m; j++)
    {
        sum = 0;
        for (i = 0; i < n; i++)
        {
            sum = sum + arr[i][j];
        }
        printf("Sum of col = %d\n", sum);
    }

    return 0;
}