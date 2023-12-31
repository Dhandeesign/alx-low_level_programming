#include "main.h"

/**
 * get_bit - returns value of bit at index in a decimal num
 * @n: num to search
 * @index: index of bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int v;

	if (index > 63)
		return (-1);

	v = (n >> index) & 1;

	return (v);
}
