#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int q;
	int z;

	q = 0;
	while (dest[q] != '\0')
	{
		q++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[q] = src[z];
	q++;
	z++;
	}
	dest[i] = '\0';
	return (dest);
}
