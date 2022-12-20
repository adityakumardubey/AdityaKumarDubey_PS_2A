#include <stdio.h>
#include <stdlib.h>

int powerfun(int, int);

int main()
{
   int n, sum = 0, temp, remainder, digits = 0;

   printf("Input number to check Armstrong or not");
   scanf("%d", &n);

   temp = n;
   // check the number of digits in given number
   while (temp != 0) {
      digits++;
      temp = temp/10;
   }

   temp = n;

   while (temp != 0) {
      remainder = temp%10;
      sum = sum + powerfun(remainder, digits);
      temp = temp/10;
   }

   if (n == sum)
      printf("%d is an Armstrong number.\n", n);
   else
      printf("%d is not an Armstrong number.\n", n);

   getch();
}

int powerfun(int num, int r) {
   int c, res = 1;

   for (c = 1; c <= r; c++)
      res = res*num;

   return res;
}




