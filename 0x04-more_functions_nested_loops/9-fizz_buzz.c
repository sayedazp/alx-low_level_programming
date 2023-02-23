#include <stdio.h>
/**
 * main - entry point function
 * Return: always return 0
*/
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", x);
		x++;
	}
	printf("\n");
	return (0);
}
