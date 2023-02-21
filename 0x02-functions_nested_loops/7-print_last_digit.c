#include "main.h"

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	int l = n % 10;
       	
	_putchar(l);
	return (l);
}
