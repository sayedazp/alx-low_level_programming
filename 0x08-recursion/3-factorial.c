#include "main.h"
/**
 * factorial - computes factorial
 * @n: the target num
 * Return: the desired factorial
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
