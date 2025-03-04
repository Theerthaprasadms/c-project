#include<stdio.h>
void biggest2()
{
  int num1, num2;
  num1=12,num2=13;

  if (num1 == num2)
    printf("both are equal");
  else if (num1 > num2) 
    printf("%d is greater", num1);
  else
    printf("\n%d is greater\n", num2);

 // return 0;
}
