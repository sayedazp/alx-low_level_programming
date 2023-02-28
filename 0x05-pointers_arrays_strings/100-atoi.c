/**
 * _atoi - some crazy func
 * @s: the desired text
 * Return: the output int
*/
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int p = 1;
	int sign = -1 ? s[1] == '-' : 1;
	int c = 0;

	while (s[i] != '\0')
	{	
		if (s[i - 1] == ' ' || s[i - 1] == '-' || s[i - 1] == '+')
		{
			if (s[i] == '-')
				sign *= -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			c++;
			if (!(s[i + 1] >= 48 && s[i + 1] <= 57))
				break;
		}
		i++;
	}
	while (c--)
	{
		n += p * (s[i--] - '0');
		p *= 10;
	}
	return (n * sign);
}
