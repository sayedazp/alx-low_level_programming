#include "main.h"

int print_last_digit(int n)
{
	int l;
	if (n < 0)
		n *= -1;

	l = n % 10;
       	
	_putchar(l);
	_putchar(l);
	return (l);
}
