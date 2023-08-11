#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills mem with a constant byte
 * @s: mem area to be filled
 * @b: char to copy
 * @n: num of times to copy b
 * Return: pointer to the mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		s[q] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates mem for an array
 * @nmemb: num of elements in the array
 * @size: size of each element
 * Return: pointer to allocated mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
