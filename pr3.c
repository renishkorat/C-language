//question 1
#include <stdio.h>

int main() {
    char ch = 'a';

    do {
        printf("%c ", ch);
        ch = ch + 4;   
    } while (ch <= 'z');

    return 0;
}

//question 2
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);


    while (num != 0) {
        num = num / 10;
        count++;
    }

    printf("Total digits = %d\n", count);

    return 0;
}

//question 3
#include <stdio.h>
int main()
{
    int n, first, last, sum;
    printf("Enter the number :");
    scanf("%d", &n);

    last = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;
    sum = first + last;

    printf("sum of first and last :%d", sum);

    return 0;
}