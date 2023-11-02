#include<stdio.h>
int main()
{
   int num1 =12;
   int num2 =11;
   int *ptr1 = &num1;
   int *ptr2 = &num2;
   int sum = (*ptr1) * (*ptr2);
   printf("%d",sum);
}