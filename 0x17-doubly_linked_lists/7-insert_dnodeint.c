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

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (iter)
	{
		if (i == idx && iter->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		else if (i == idx && iter->next != NULL)
		{
			new = malloc(sizeof(dlistint_t));
			new->n = n;
			new->next = iter;
			iter->prev->next = new;
			new->prev = iter->prev;
			iter->prev = new;
			return (new);
		}
		iter = iter->next;
		i++;
	}
	return (NULL);
}
