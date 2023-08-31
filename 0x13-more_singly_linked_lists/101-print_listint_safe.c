#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts num of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of listint_t to check.
 * Return: If list is not looped - 0.
 * Otherwise - Num of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *snail, *rabbit;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	snail = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (snail == rabbit)
		{
			snail = head;
			while (snail != rabbit)
			{
				nodes++;
				snail = snail->next;
				rabbit = rabbit->next;
			}

			snail = snail->next;
			while (snail != rabbit)
			{
				nodes++;
				snail = snail->next;
			}

			return (nodes);
		}

		snail = snail->next;
		rabbit = (rabbit->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints listint_t list safely.
 * @head: A pointer to the head of listint_t list.
 * Return: Num of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
