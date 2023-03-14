#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function to create a buffer
 * @size: size of a buffer
 * @c: the initialized character
 * Return: returns a pointer
*/
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	x = (char *)(malloc(sizeof(char) * size));
	if (x == NULL)
		return (NULL);
	while (i < size)
	{
		x[i] = c;
		i++;
	}
	return (x);
}
