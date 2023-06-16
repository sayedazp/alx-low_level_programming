#include "lists.h"
/**
 * add_dnodeint_end - a func to add a node at ll end
 * @head: a pointer pointer to the head of the linked list
 * @n: a number for node to hold
 * Return: addr of newly added node
 * **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curr = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;


	if (!(*head))
	{
		*head = new;
		return (*head);
	}
	else
	{
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new;
		new->prev = curr;
	}
	return (new);
}
