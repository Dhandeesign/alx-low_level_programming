#include "main.h"

/**
 * rev_string - reverse array
 * @n: int params
 * Return: 0
 */

void rev_string(char *n)
{
	int q = 0;
	int z = 0;
	char temp;

	while (*(n + q) != '\0')
	{
		q++;
	}
	q--;

	for (z = 0; z < q; z++, q--)
	{
		temp = *(n + z);
		*(n + z) = *(n + q);
		*(n + q) = temp;
	}
}

/**
 * infinite_add - add 2 nums altogether
 * @n1: text rep of 1st num to add
 * @n2: text rep of 2nd num to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling func
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, q = 0, z = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + q) != '\0')
		q++;
	while (*(n2 + z) != '\0')
		z++;
	q--;
	z--;
	if (z >= size_r || q >= size_r)
		return (0);
	while (z >= 0 || q >= 0 || overflow == 1)
	{
		if (q < 0)
			val1 = 0;
		else
			val1 = *(n1 + q) - '0';
		if (z < 0)
			val2 = 0;
		else
			val2 = *(n2 + z) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		z--;
		q--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
