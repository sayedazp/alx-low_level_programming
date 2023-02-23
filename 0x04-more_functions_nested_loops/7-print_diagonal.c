#include "main.h"
/**
 * print_diagonal - prints digonal
 * @n: the input number
*/
void print_diagonal(int n)
{
	int c, x;

	c = x = n;
	if (n <= 0)
		_putchar('\n');
	while (n--)
	{
		c = x;

		while (c > n + 1)
		{
			_putchar(' ');
			c--;
		}
		_putchar('\');
		_putchar('\n');
	}
}
