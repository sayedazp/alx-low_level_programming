#include "main.h"
/**
 * print_last_digit - a function to return last digit
 * @n: the checked variable
 * return: the last digit
*/

int print_last_digit(int n)
{
	int l = n % 10;

       if (l < 0)
		l *= -1;	       
	_putchar('0' + l);
	return (l);
}
