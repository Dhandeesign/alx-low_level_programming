#include "main.h"
/**
 * _memcpy - a func that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@n: num of bytes
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int q = n;

	for (; a < q; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
