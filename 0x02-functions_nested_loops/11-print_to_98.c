#include "main.h"
/**
 * print_to_98 - func to print numbers till 98
 * @n: the starting positiion
*/
void print_to_98(int n)
{
	int a,b;

	while(n <= 98)
	{
		a = (n / 10);
		b = n % 10;
		if (a != 0)
			_putchar(a + '0');
		_putchar(b + '0');
		_putchar(',');
		if (n != 98)
			_putchar(' ');
		n++;

	}
	_putchar('\n');
}
