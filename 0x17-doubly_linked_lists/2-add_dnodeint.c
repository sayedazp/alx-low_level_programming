#include "lists.h"
/**
 * add_dnodeint - a func to add a node ate ll beginning
 * @head: a pointer pointer to the head of the linked list
 * @n: a number for node to hold
 * Return: addr of newly added node
 * **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
		new->next = (*head);
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
