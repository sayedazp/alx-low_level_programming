#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @n: int to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *i = NULL;


	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
	} else
	{
		i = *head;
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = new;
	}
	return (new);
}
