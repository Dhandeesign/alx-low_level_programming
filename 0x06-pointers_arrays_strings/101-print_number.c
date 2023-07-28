#include "main.h"
/**
 * print_number - print nums chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n101;

	n101 = n;

	if (n < 0)
	{
		_putchar('-');
		n101 = -n;
	}

	if (n101 / 10 != 0)
	{
		print_number(n101 / 10);
	}
	_putchar((n101 % 10) + '0');
}
