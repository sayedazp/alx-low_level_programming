#include "main.h"
/**
 * _puts_recursion - a function to print out recursevly
 * @s: the desired character
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	putchar(*s++);
	_puts_recursion(s);
}
