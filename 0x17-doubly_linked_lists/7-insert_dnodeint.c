#include "lists.h"
/**
 * insert_dnodeint_at_index - a func to insert a node at ll index
 * @h: a pointer pointer to the head of the linked list
 * @idx: index
 * @n: num to add
 * Return: newly added or null
 * **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iter = *h, *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (iter)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->next = iter;
			new->n = n;
			iter->prev->next = new;
			new->prev = iter->prev;
			if (iter != NULL)
				iter->prev = new;
			return (new);
		}
		iter = iter->next;
		i++;
	}
	return (NULL);
}
