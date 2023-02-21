/**
 * _abs - a function prints the sign of the input
 * @n: the checked variable
 * Return: the abs value of the input
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (0);
	}
}
