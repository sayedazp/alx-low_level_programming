#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - a calloc clone
 * @nmemb: number of eles
 * @size: size of an ele
 * Return: a void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i, d;

	d = nmemb * size;
	if (nmemb <= 0 || size == 0)
		return (NULL);
	x = malloc(d);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < (d); i++)
	{
		x[i] = 0;
	}
	return (x);
}
