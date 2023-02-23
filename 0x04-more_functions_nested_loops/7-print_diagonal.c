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
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		c = x;

		if (n < 0)
		{
			_putchar('\n');
			break;
		}
		while (c > n)
		{
			_putchar(' ');
			c--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
