#include "main.h"
/**
 * print_rev - reverse print order
 * @s: integer pointer as input
*/
void print_rev(char *s)
{
	int i = 0, c = 0;

	while (*(s + i) != '\0')
	{
		c++;
		i++;
	}
	i = 0;
	while (--c != -1)
	{
		_putchar(*(s + c));
	}
	_putchar('\n');
}
