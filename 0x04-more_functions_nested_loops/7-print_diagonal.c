#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	 if (n <= 0)
	 {
		 _putchar('\n');
	 } else
	 {
		 int q; 
   		 int z;

		 for (q = 0; q < n; q++)
		 {
			 for (z = 0; z < n; z++)
		 {
			 if (z == q)
			 _putchar('\\');
			 else if (z < q)
			 _putchar(' ');
		 }
		 _putchar('\n');
	 }
	 }
}
