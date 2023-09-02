#include "main.h"

/**
 * flip_bits - counts num of bits to change
 * to get from one num to another
 * @n: first num
 * @m: second num
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int q, t = 0;
	unsigned long int a;
	unsigned long int e = n ^ m;

	for (q = 63; q >= 0; q--)
	{
		a = e >> q;
		if (a & 1)
			t++;
	}

	return (t);
}
