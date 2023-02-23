#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: triangle size
*/
void print_triangle(int size)
{
	int c = 1;

	while (c <= size)
	{
		int i = 1;

		while (i <= size - c)
		{
			_putchar(' ');
			i++;
		}
		i = 1;
		while (i <= c)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		c++;
	}
	if (c <= 0)
		_putchar("\n");
}
