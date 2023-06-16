#include "lists.h"
/**
 * get_dnodeint_at_index - a func to get a node at ll index
 * @head: a pointer pointer to the head of the linked list
 * @index: a number for node to hold
 * Return: poointer of newly added node
 * **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	if (!head)
		return (NULL);

	while (tmp && i <= index)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
