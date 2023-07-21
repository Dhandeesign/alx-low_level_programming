#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints largest prime 
 *        factor of number 612852475143
 * Return: Always 0
 */
int main(void)
{
 long int y;
 long int max;
 long int q;

 y = 612852475143;
 max = -1;

 while (y % 2 == 0)
 {
 max = 2;
 y /= 2;
 }

 for (q = 3; q <= sqrt(y); q = q + 2)
 {
 while (y % q == 0)
 {
 max = q;
 y = y / q;
 }
 }

 if (y > 2)
 max = y;

 printf("%ld\n", max);

 return (0);
}
