#include "main.h"
/**
 * rec_step - helper function
 * @s: parameter to work on
 * @o: the original string
 * Return: indicating int
*/
int rec_step(char *s, char *o)
{
	if (s <= o)
		return (1);
	if (*s != *o)
		return (0);
	return (rec_step(s - 1, o + 1));
}
/**
 * rec_check - helper func
 * @s: parameter to work on
 * @o: original string
 * Return: int indicating the state
*/
int rec_check(char *s, char *o)
{
	if (*(s + 1) == '\0')
	{
		return (rec_step(s, o));
	}
	return (rec_check((s + 1), o));
}
/**
 * is_palindrome - the entry func
 * @s: the character to check
 * Return: 0 or 1 indicating is palindrome or not
*/
int is_palindrome(char *s)
{
	char *o = s;

	return (rec_check(s, o));

}
