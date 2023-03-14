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
	x = (int **)(malloc(sizeof(int *) * height));
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	while (i < height)
	{
		*(x + i) = (int *)malloc(sizeof(int) * width);
		if (*(x + i) == NULL)
		{
			for (i = 0; i < height; i++)
				free(x[i]);
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
