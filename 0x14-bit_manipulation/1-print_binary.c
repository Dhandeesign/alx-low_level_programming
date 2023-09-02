#include "main.h"

/**
 * print_binary - prints binary equivalent of a decimal num
 * @n: num to print in binary
 */
void print_binary(unsigned long int n)
{
	int q, count = 0;
	unsigned long int a;

	for (q = 63; q >= 0; q--)
	{
		a = n >> q;

		if (a & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
