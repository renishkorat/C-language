#include <stdio.h>
int main()
{
    int marks;
    // que 1//
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    (marks >= 90) ? printf("Your Grade is: 'A'") : (marks >= 80) ? printf("Your Grade is: 'B'")
                                               : (marks >= 70)   ? printf("Your Grade is: 'C'")
                                               : (marks >= 60)   ? printf("Your Grade is: 'D'")
                                               : (marks >= 50)   ? printf("Your Grade is: 'E'")
                                                                 : printf("Your Grade is: 'F'");
    printf("\n\n");
    return 0;
}

    // que 2//
    #include<stdio.h>
    int main(){
        int marks;
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    switch ((marks / 10) * 10)
    {
    case 100:
    case 90:
        printf("Your Grade is: A");
        break;

    case 80:
        printf("Your Grade is: B");
        break;

    case 70:
        printf("Your Grade is: C");
        break;

    case 60:
        printf("Your Grade is: D");
        break;

    case 50:
        printf("Your Grade is: E");
        break;

    default:
        printf("Your Grade is: F");
    }
    printf("\n");
    return 0;
}

    // que 3//
    #include<stdio.h>
    int main(){
        int marks;
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Your Grade is A");
    }
    else if (marks >= 80)
    {
        printf("Your Grade is B");
    }
    else if (marks >= 70)
    {
        printf("Your Grade is C");
    }
    else if (marks >= 60)
    {
        printf("Your Grade is D");
    }
    else
    {
        printf("Your Grade is F");
    }

    return 0;
}