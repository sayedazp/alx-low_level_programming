/**
 * leet - a function to enrypt text
 * @a: input text
 * Return: the output encrypted txt
*/
char *leet(char *a)
{
	int i = 0;
	int y = 0;
	int ar2[5] = {4, 3, 0, 7, 1};
	char ar1[5] = {'a', 'e', 'o', 't', 'l'};

	while (a[i] != '\0')
	{
		while (y < 5)
		{
			if (a[i] == ar1[y] || a[i] == ar1[y] - 32)
			{
				a[i] = ar2[y] + '0';
				break;
			}
			y++;
		}
		y = 0;
		i++;
	}
	return (a);
}
