#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * but for multiples of three prints Fizz instead of the num
 * the multiples of five prints Buzz
 * Return: Always 0
 */
int main(void)
{
 int q;

 for (q = 1; q <= 100; q++)
 {
 if (q % 3 == 0 && q % 5 != 0)
 {
 printf(" Fizz");
 } else if (q % 5 == 0 && q % 3 != 0)
 {
 printf(" Buzz");
 } else if (q % 3 == 0 && q % 5 == 0)
 {
 printf(" FizzBuzz");
 } else if (q == 1)
 {
 printf("%d", q);
 } else
 {
 printf(" %d", q);
 }
 }
 printf("\n");

 return (0);
}
