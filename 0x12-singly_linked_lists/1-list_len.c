#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns num of elements in a linked list
 * @h: pointer to list_t list
 * Return: num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t w = 0;

	while (h)
	{
		w++;
		h = h->next;
	}
	return (w);
}
