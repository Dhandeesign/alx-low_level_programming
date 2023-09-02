#include "main.h"

/**
 * get_endianness - checks if machine is little or big endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int q = 1;
	char *c = (char *) &q;

	return (*c);
}
