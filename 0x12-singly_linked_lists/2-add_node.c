#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t* new ;
	unsigned int l = 0;
	
	while (str[l])
		l++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	
	new -> str = strdup(str);
	new -> len = l;
	new -> next = (*head);
	(*head) = new;
	return ((*head));
}