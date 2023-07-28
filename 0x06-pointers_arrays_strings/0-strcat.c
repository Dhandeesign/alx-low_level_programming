#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int q;
	int z;

	q = 0;
	while (dest[q] != '\0')
	{
		q++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[q] = src[z];
		q++;
		z++;
	}

	dest[q] = '\0';
	return (dest);
}
