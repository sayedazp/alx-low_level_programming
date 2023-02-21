#include "main.h"
/**
 * print_sign - a function prints the sign of the input
 * @n: the checked variable
 * Return: 0 or 1 or -1 determining the state of the input
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
