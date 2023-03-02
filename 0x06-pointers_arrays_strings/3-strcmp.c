/**
 * _strcmp - comparison fun
 * @s1: the first compared str
 * @s2: the second compared str
 * Return: the difference
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		r = s1[i] - s2[i];
		if (r != 0)
			break;
		i++;
	}
	return (r);
}
