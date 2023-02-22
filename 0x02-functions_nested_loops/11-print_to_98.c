#include "main.h"
/**
 * print_to_98 - func to print numbers till 98
 * @n: the starting positiion
*/
void print_to_98(int n)
{
	int a, b, c;

	while(n != 98)
	{
		a = (n / 10);
		b = n % 10;
		c = n / 100;

		if (n < 0)
			_putchar('-');
		if (c != 0)
			_putchar(c + '0');
		if (a != 0 || c != 0)
			_putchar(a + '0');
		_putchar(b + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');

		}
		n = n > 98 ? n - 1 : n + 1 ;
	}
	_putchar(9 + '0');
	_putchar(8 + '0');
	_putchar('\n');
}
