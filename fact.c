#include<stdio.h>

void factorial()
{
    int number, factorial = 1;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    while(number > 1) {
        factorial = factorial * number;
        number--;
    }

    printf("Factorial is: %d\n", factorial);
   // return 0;
}
