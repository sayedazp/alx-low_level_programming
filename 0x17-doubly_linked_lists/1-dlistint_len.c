#include "lists.h"
/**
 * dlistint_len - a func to return length of doubly ll
 * @h: a pointer to the head of the linked list
 * Return: unsigned int i determining the size
 * **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
