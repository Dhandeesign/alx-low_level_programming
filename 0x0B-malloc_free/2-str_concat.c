#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int q, cq;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	q = cq = 0;
	while (s1[q] != '\0')
		q++;
	while (s2[cq] != '\0')
		cq++;
	conct = malloc(sizeof(char) * (q + cq + 1));

	if (conct == NULL)
		return (NULL);
	q = cq = 0;
	while (s1[q] != '\0')
	{
		conct[q] = s1[q];
		q++;
	}

	while (s2[cq] != '\0')
	{
		conct[q] = s2[cq];
		q++, cq++;
	}
	conct[q] = '\0';
	return (conct);
}
