/**
 * reverse_array - reverse array elements
 * @a: input array
 * @n: number of elements
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	while (i < --n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
	}
}
