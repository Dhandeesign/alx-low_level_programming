#include "lists.h"

/**
 * get_nodeint_at_index - get back node at a certain index in linked list
 * @head: first node in linked list
 * @index: index of node to get back
 * Return: pointer to the node we're searching for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q = 0;
	listint_t *temp = head;

	while (temp && q < index)
	{
		temp = temp->next;
		q++;
	}

	return (temp ? temp : NULL);
}
