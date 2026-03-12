//question 1 
#include<stdio.h>
 int main(){
    int bs;
    float hra_per, da_per, ta_per;
    float g_salary,hra_amo,da_amo,ta_amo;
     
    printf("Enter the bs :");
    scanf("%d", &bs);
    printf("Enter the hra_per :");
    scanf("%f", &hra_per);
    printf("Enter the da_per :");
    scanf("%f", &da_per);
    printf("enter the ta_per :");
    scanf("%f", &ta_per);

    hra_amo  = bs * (hra_per / 100);
    da_amo = bs * (da_per / 1000);
    ta_amo = bs * (ta_per / 100);
    g_salary = bs + hra_amo + da_amo + ta_amo;

    printf("The gross salary is : %.2f", g_salary);

    return 0;

 }
 
 //question 2
 
 #include <stdio.h>
int main()
{
   int c;
   float f;

   printf("Enter the value of c :");
   scanf("%d", &c);

   f = (9 / 5 * c) + 32;

   printf("The temperature : %.2f", f);
}

//question 3
#include <stdio.h>
int main()
{

   int first_angle;
   int second_angle;
   int third_angle;

   printf("enter the value of first angle :");
   scanf("%d", &first_angle);

   printf("enter the value of second angle :");
   scanf("%d", &second_angle);

   third_angle = 180 - (first_angle + second_angle);

   printf("The value of third angle is : %d\n", third_angle);

   return 0;
}