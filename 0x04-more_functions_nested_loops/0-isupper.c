/**
 * _isupper - checks if the input upper or not
 * @c: the checked char
 * Return: either 1 or 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
