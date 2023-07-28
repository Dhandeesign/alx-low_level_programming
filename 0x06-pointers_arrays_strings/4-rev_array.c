#include "main.h"
/**
 * reverse_array - reverse array of int
 * @a: array
 * @n: num of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int q;
	int w;

	for (q = 0; q < n--; q++)
	{
		w = a[q];
		a[q] = a[n];
		a[n] = w;
	}
}
