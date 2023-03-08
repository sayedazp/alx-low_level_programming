#include "main.h"
/**
 * check_prev - a checker function
 * @base: the checked var
 * @x: the upper bound of the check
 * @y: the itteration variable
 * Return: an integer indicating the state
*/
int check_prev(int base, int x, int y)
{
	if (x <= 1)
		return (0);
	if (x < y)
		return (1);
	if (base % y == 0)
		return (0);
	check_prev(base, x, y + 1);
}
/**
 * is_prime_number - a function that checks if certain num is prime
 * @n: the checked num
 * Return: the returned state 0,1
*/
int is_prime_number(int n)
{
	return (check_prev(n, n / 2, 2));
}
