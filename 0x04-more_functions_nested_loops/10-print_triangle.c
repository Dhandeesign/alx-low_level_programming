#include "main.h"

/**
 * print_triangle - prints a triangle, # as character.
 * @size: size of triangle
 */
void print_triangle(int size)
{
 if (size <= 0)
 {
 _putchar('\n');
 } else
 {
 int q; 
 int z;

 for (q = 1; q <= size; q++)
 {
 for (z = q; z < size; z++)
 {
 _putchar(' ');
 }

 for (z = 1; z <= q; z++)
 {
 _putchar('#');
 }

 _putchar('\n');
 }
 }
}
