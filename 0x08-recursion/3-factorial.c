# include "main.h"

/**
 * factorial - calculate the factorial of the number recurively
 * @n: The number whos factorial is calculated
 * Return: the respective value of the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
