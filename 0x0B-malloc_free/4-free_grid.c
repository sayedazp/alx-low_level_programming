#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a func to cncat 2 strs
 * @x: first str to concate
 * @height: second str to concate
*/
void free_grid(int **x, int height)
{
	int i = 0;

	while (i < height)
	{
		if (*(x + i) == NULL)
		{
			for (i = 0; i < height; i++)
				free(x[i]);
			free(x);
		}
		i++;
	}
}
