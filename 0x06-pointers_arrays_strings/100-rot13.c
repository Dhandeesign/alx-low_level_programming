#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)
{
	int q;
	int z;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (q = 0; s[q] != '\0'; q++)
	{
		for (z = 0; z < 52; z++)
		{
			if (s[q] == data1[z])
			{
				s[q] = datarot[z];
				break;
			}
		}
	}
	return (s);
}
