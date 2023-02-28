#include "main.h"
/**
 * puts_half - reverse a string
 * @string: char pointer as input
*/
void puts_half(char *str)
{
	int i = 0, c = 0;

	while (*(str + i) != '\0')
	{
		c++;
		i++;
	}
	if (c % 2 == 0)
		i = c / 2;
	else
		i = c - ((c - 1) / 2);
	while (i <= c)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
