#include "main.h"
/**
 * _puts_recursion - a function to print out recursevly
 * @s: the desired character
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}
