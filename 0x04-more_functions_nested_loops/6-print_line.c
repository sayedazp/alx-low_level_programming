#include "main.h"
/**
 * print_line - print line with length n
 * @n: the length
*/

void print_line(int n)
{
	while (n--)
	{
		if (n < 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
