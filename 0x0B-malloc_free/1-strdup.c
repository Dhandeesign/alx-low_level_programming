#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *kkk;
	int q, w = 0;

	if (str == NULL)
		return (NULL);
	q = 0;
	while (str[q] != '\0')
		q++;

	aaa = malloc(sizeof(char) * (q + 1));

	if (kkk == NULL)
		return (NULL);

	for (w = 0; str[w]; w++)
		kkk[w] = str[w];

	return (kkk);
}
