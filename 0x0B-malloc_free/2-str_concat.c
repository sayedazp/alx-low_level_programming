#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a func to cncat 2 strs
 * @s1: first str to concate
 * @s2: second str to concate
 * Return: the concated one
*/
char *str_concat(char *s1, char *s2)
{
	int cnt1 = 0, cnt2 = 0, c = 0;
	char *x;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	while (*s1++ != '\0')
		cnt1++;
	while (*s2++ != '\0')
		cnt2++;
	x = (char *)(malloc(sizeof(char) * (cnt1 + cnt2 + 1)));
	if (x == NULL)
		return (NULL);
	s1 = s1 - cnt1 - 1;
	s2 -= (cnt2 + 1);
	while (*(s1 + c) != '\0')
	{
		x[c] = s1[c];
		c++;
	}
	c = 0;
	while (*(s2 + c) != '\0')
	{
		x[c + cnt1] = s2[c];
		c++;
	}
	return (x);
}
