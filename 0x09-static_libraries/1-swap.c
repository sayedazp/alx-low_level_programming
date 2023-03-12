/**
 * swap_int - swaps two integers
 * @n: pointer the first value
 * @b: pointer to the second value
*/
void swap_int(int *n, int *b)
{
	int tmp = *b;

	*b = *n;
	*n = tmp;
}
