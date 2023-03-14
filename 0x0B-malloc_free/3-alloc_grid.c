#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a func to cncat 2 strs
 * @width: first str to concate
 * @height: second str to concate
 * Return: the concated one
*/
int **alloc_grid(int width, int height)
{
	int **x;
	int i = 0;
	int z = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = (int **)(malloc(sizeof(int *) * width));
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	while (i < width)
	{
		*(x + i) = (int *)malloc(sizeof(int) * height);
		if (*(x + i) == NULL)
		{
			free(x);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		z = 0;
		while (z < width)
		{
			x[i][z] = 0;
			z++;
		}
		i++;
	}
	return (x);
}
