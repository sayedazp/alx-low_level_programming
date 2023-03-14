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
	int z = 0;

	for (z = 0; z < height; z++)
		free(x[z]);
	free(x);
}
