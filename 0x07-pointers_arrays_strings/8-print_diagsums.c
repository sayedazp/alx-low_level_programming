#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - printsdiag sums
 * @a: poiter
 * @size: array size
*/
void print_diagsums(int *a, int size)
{
	int i = 0, y = 0;
	unsigned int diagsum = 0, nondiagsum = 0;

	while (i < size)
	{
		while (y < size)
		{
			if (i == y)
				diagsum += *(a + y + (size * i));
			if (i + y == size - 1)
				nondiagsum += *(a + y + (size * i));
			y++;
		}
		y = 0;
		i++;
	}
	printf("%d, %d\n", diagsum, nondiagsum);
}
