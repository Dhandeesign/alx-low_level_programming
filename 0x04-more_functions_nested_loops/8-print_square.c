#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 */
void print_square(int size)
{
	 if (size <= 0)
 	 {
		 _putchar('\n');
	 } else
	 {
	 int q, z;

		 for (q = 0; q < size; q++)
 		 {	
		 for (z = 0; z < size; z++)
		 {
			 _putchar('#');
		 }
		 _putchar('\n');
		 }
	 }
}
