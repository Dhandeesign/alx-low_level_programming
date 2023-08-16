#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of string
 * @s: string to eval
 * Return: length of string
 */
int _strlen(char *s)
{
	int q;

	q = 0;

	while (s[q] != '\0')
	{
		q++;
	}

	return (q);
}

/**
 * *_strcpy - copies string pointed to by src
 * comprises the ending null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer when the string is copied
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, q;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (q = 0; q < len; q++)
	{
		dest[q] = src[q];
	}
	dest[q] = '\0';

	return (dest);
}

/**
 * new_dog - produces new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

