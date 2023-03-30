#include "lists.h"
/**
 * list_len - a func
 * @h: a linked list
*/
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}