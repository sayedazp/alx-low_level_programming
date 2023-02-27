#include "main.h"
/**
 * rev_string - reverse a string
 * @s:  char pointer as input
*/
void rev_string(char *s)
{
	int i = 0, c = 0;
	char tmp;

	while (*(s + i) != '\0')
	{
		c++;
		i++;
	}
	i = 0;
	while (--c != i)
	{
		tmp = s[i];
		s[i] = s[c];
		s[c] = tmp;
		i++;
	}
}
