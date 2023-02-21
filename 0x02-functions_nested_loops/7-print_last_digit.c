#include "main.h"

int print_last_digit(int n)
{
	l = n % 10;

       if (l < 0)
		l *= -1;	       
	_putchar('0' + l);
	return (l);
}
