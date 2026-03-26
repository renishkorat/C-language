//question 1
#include <stdio.h>

int main()
{
    int i, length = 0;
    char str[20];
    char *ptr;

    printf("Enter any string: ");
    fgets(str,20,stdin);

    ptr = str; 

    
    for(i=0; *ptr != '\0'; i++){
        length++;
        ptr++;
    }

    printf("Length of string: %d", length);

    return 0;
}

//question 2
#include <stdio.h>

int cube(int *p, int n)
{
    int i;
    for(i = 0; i < n*n; i++)
    {
        *(p + i) = (*(p + i)) * (*(p + i)) * (*(p + i));
    }

}

int main()
{
    int n, i, j;
    
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    cube(&a[0][0], n);

    printf("Cubes:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}