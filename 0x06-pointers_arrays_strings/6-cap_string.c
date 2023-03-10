/**
 * cap_string - function to capitalize letters
 * @a: the input array
 * Return: Return char array
*/
char *cap_string(char *a)
{
	int i = 0;
	int lis[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{'};
	int l = 0;

	lis[13] = '}';

	while (a[i] != '\0')
	{
		while ((l < 13)  && (a[i] >= 'a' && a[i] <= 'z'))
		{
			if (a[i - 1] == lis[l])
			{
				a[i] -= 32;
			}
			l++;
		}
		l = 0;
		i++;
	}
	return (a);
}
