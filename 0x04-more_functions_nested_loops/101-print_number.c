#include "main.h"
/**
 * print_number - printing integers
 * @n: the target int
*/
void print_number(int n)
{
	int o = 10;
	int v = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10 > 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
