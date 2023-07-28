#include "main.h"
/**
 * leet - encode into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int q;
	int z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (q = 0; n[q] != '\0'; q++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[q] == s1[z])
			{
				n[q] = s2[z];
			}
		}
	}
	return (n);
}
