#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int q, t, k = 0, u = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (q = 0; q < ac; q++)
	{
		for (t = 0; av[q][t]; t++)
			u++;
	}
	u += ac;

	str = malloc(sizeof(char) * u + 1);
	if (str == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
	for (t = 0; av[q][t]; t++)
	{
		str[k] = av[q][t];
		k++;
	}
	if (str[k] == '\0')
	{
		str[k++] = '\n';
	}
	}
	return (str);
}
