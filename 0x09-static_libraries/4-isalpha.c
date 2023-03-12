/**
 * _isalpha - determine whether the c is alphapet or not
 * @c: the checked variable
 * Return: return 0 or 1 to determine the case
*/
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
