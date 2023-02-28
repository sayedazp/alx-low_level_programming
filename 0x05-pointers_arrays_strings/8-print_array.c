#include <stdio.h>
/**
 * print_array - priting an array to
 * @a: thee printed arr
 * @n: the to
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
}
