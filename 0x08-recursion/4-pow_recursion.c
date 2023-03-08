#include "main.h"
/**
 * _pow_recursion - a function to compute numbers raised to power
 * @x: first inp
 * @y: second inp
 * Return: the returned value
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
