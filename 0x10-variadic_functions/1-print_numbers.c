#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print variadic number
 * @separator: char
 * @n:variadic variable count
 * Return :void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i != n - 1)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d");
	}
	printf("\n");
	va_end(ap);
}
