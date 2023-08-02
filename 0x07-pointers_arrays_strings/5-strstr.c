#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *g = haystack;
		char *b = needle;

		while (*g == *b && *b != '\0')
		{
			g++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
