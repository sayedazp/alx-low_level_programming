#include <stdarg.h>
#include <stdio.h>
/**
 * add - a func to add
 * @count: a needed param
 * Return: an integer
*/
int add(const int count, ...)
{
	va_list ap;
	int i, sum;

	if (count == 0)
	{
		return (0);
	}
	va_start(ap, count);
	sum = 0;
	for (i = 0; i < count; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
