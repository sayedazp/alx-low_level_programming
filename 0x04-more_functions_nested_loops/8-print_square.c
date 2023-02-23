#include "main.h"
/**
 * print_square - prints squares
 * @n: the input number
*/
void print_square(int n)
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
		while (c > 0)
		{
			_putchar('#');
			c--;
		}
		_putchar('\n');
		n--;
	}
}
