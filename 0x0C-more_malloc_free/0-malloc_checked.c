#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a func
 * @b: a size to allocate
 *Return: void pointer to the allocated space
*/
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);

}
