#include "main.h"
/**
 * _print_rev_recursion - prints in recursion
 * @s: the target to print
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
