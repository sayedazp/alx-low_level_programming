#include "main.h"
/**
 * _strdup - a func
 * @str: a str
 * Return: a string pointer
*/
char *_strdup(char *str)
{
	int cnt = 0;
	char *x;
	int i = 0;

	while (*str != '\0')
	{
		cnt++;
		str++;
	}
	str = str - cnt;
	x = (char *)(malloc(sizeof(char) * (cnt + 1)));
	if (x == NULL || str ==  NULL)
	{
		return (NULL);
	}
	*x = 's';
	while (i < cnt)
	{
		*(x + i) = *(str + i);
		i++;
	}
	x[cnt] = '\0';
	return (x);

}
