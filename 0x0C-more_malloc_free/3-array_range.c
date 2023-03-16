#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a func
 * @min: minimum val
 * @max: max val
 * Return: an integer pointer
*/
int *array_range(int min, int max)
{
	int *x;
	int i, full;

	full = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	x = malloc(sizeof(int) * full);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		x[i] = min++;
	}
	return (x);
}
