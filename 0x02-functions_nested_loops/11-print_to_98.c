#include "main.h"
/**
 * print_to_98 - func to print numbers till 98
 * @n: the starting positiion
*/
void print_to_98(int n)
{
	while(n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		if (n != 98)
			_putchar(' ');
		n++;

	}
	_putchar('\n');
}
