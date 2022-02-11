#include<stdio.h>

#include<stdlib.h>

#include<math.h>

int main()
{
   int choose;
   long no1, no2, m;

   printf(" select any one from the  options  below:"

          "\n1 = Addition\n"

          "\n2 = Subtraction\n"

          "\n3 = Multiplication\n"

          "\n4 = Division\n"

          "\n5 = Squares\n"
 
          "\n6 = Cubes\n"

          "\n7 = exit\n"

          "\n\nchoose: ");

   scanf("%d", &choose);
   //while loop check whether the choose option  is in the given range
   while(choose< 1 || choose > 7)
   {
      printf("\nchoose the above mentioned option."
             "\nChoose: ");
      scanf("%d", &choose);
   }
   switch (choose)
   {

   case 1:
      printf(" Please enter  any  two numbers to add: \n");

      scanf("%ld %ld", &no1, &no2);
      m = no1 + no2;
      printf("Sum = %ld", m);
      break;

   case 2:
      printf("Please enter any  two numbers  to substract: \n");
      scanf("%ld %ld", &no1, &no2);
      m = no1 - no2;
      printf("Sub = %ld", m);
      break;

   case 3:

      printf("Please enter any two numbers to multiply: \n");
      scanf("%ld %ld", &no1, &no2);
      m = no1 * no2;
      printf("Pdt= %ld", m);
      break;
   case 4:

      printf("Enter the Dividend: ");

      scanf("%ld", &no1);

      printf("Enter the Divisor: ");

      scanf("%ld", &no2);
     //while loop checks for  the divisor whether it is zero or not

     while(no2 == 0)
     {
        printf("\nDivisor cannot be zero."
               "\nEnter divisor once again to confirm: ");
        scanf("%ld", &no2);
     }

     m = no1 / no2;
     printf("\nQuotient = %ld", m);
     break;

   case 5:
      printf("Please enter any number of your choice: \n");
      scanf("%ld", &no1);
      m= no1 * no1;
      printf("Sqr = %ld", m);
      break;

   case 6:
   
      printf("Please enter any number of  your choice: \n");

      scanf("%ld", &no1);

      m = no1 * no1 * no1;
      printf("Cube = %ld", m);

      break;

   case 7:
   
   return 0;
   default: printf("\nError");
   }
}