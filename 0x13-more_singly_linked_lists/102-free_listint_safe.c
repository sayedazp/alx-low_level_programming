#include "lists.h"
#include <stdio.h>

size_t looped_listint_len2(const listint_t *head);
/**
 * looped_listint_len2 - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len2(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
	if (tortoise == hare)
	{
		tortoise = head;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next;
		}

		tortoise = tortoise->next;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
		}

		return (nodes);
	}

	tortoise = tortoise->next;
	hare = (hare->next)->next;
	}

	return (0);
}
/**
 * free_listint_safe - frees a list (safe version)
 * @h: linked list of type listint_t
 *
 * Return: number of nodes in freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes, index = 0;
	listint_t *head = *h;
	listint_t *tmp;

	nodes = looped_listint_len2(*h);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			head = head->next;
		}
	}

	for (index = 0; index < nodes; index++)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}

	free(*h);
	*h = NULL;
	return (nodes);
}
