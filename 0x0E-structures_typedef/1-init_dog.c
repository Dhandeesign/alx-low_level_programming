#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - modifies a variable of type struct dog
 * @d: pointer to struct dog to modify
 * @name: name to modify
 * @age: age to modify
 * @owner: owner to modify
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
}
