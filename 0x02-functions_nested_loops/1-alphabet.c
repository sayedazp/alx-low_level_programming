#include "main.h"
/**
 * print_alphabet - printing alphabet from a to z
 * Return: no return it's a void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c != 'z' + 1)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
