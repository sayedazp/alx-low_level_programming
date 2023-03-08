#include "main.h"
/**
 * _strlen_recursion - know string length using recur
 * @s: a char pointer to str
 * Return: the string length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
