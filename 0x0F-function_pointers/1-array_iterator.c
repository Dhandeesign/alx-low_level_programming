#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array on a empty line
 * @array: array
 * @size: how many array to print
 * @action: pointer to print in regular
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int q;

	if (array == NULL || action == NULL)
		return;

	for (q = 0; q < size; q++)
	{
		action(array[q]);
	}
}
