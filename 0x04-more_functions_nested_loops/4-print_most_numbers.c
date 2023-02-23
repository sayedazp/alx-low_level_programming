#include "main.h"
/**
 * print_most_numbers - print numbers from 1 to 9
*/

void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 52 || i != 50)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
