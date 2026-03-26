// question 1
#include <stdio.h>

int main()
{
    int i, length = 0;
    char str[20];
    char *ptr;

    printf("Enter any string: ");
    fgets(str, 20, stdin);

    ptr = str;

    for (i = 0; *ptr != '\0'; i++)
    {
        length++;
        ptr++;
    }

    printf("Length of string: %d", length);

    return 0;
}

// question 2
#include <stdio.h>

int cube(int *p, int r, int c)
{
    int i, j;
    printf("Cubes of array element:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            int value = *(p + i * c + j);
            printf("%d ", value * value * value);
        }
        printf("\n");
    }
}

int main()
{
    int r, c, i, j;

    printf("Enter number of row: ");
    scanf("%d", &r);
    printf("Enter number of col: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter array elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    cube(&arr[0][0], r, c);

    return 0;
}