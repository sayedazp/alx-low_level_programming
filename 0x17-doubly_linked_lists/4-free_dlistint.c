#include "lists.h"

/**
 * free_dlistint - a func to free ll
 * @head: a pointer to the head of the linked list
 * Return: void
 * **/

void free_dlistint(dlistint_t *head)
{

	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
