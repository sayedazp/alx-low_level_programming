#include "lists.h"
/**
 * sum_dlistint - a func to get a node at ll index
 * @head: a pointer pointer to the head of the linked list
 * Return: sum
 * **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *i = head;
	int sum = 0;

	while (i)
	{
		sum += i->n;
		i = i->next;
	}
	return (sum);
}
