#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, b, a;

	flag = 0;
	a = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}

	return (a);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int q, k = 0, fil = 0, words, s = 0, start, end;

	while (*(str + fil))
		fil++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (q = 0; q <= fil; q++)
	{
		if (str[q] == ' ' || str[q] == '\0')
		{
			if (s)
			{
				end = q;
				tmp = (char *) malloc(sizeof(char) * (s + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - s;
				k++;
				s = 0;
			}
		}
		else if (s++ == 0)
			start = q;
	}

	matrix[k] = NULL;

	return (matrix);
}
