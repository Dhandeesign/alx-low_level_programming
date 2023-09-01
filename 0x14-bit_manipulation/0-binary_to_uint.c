#include "main.h"

/**
 * binary_to_uint - converts binary num to unsigned int
 * @b: string containing binary num
 * Return: converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int q;
	unsigned int v = 0;

	if (!b)
		return (0);

	for (q = 0; b[q]; q++)
	{
		if (b[q] < '0' || b[q] > '1')
			return (0);
		v = 2 * v + (b[q] - '0');
	}

	return (v);
}
