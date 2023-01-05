#include "main.h"
/**
 * factorial - prints the factorial
 * @n: number to return the factorial from
 * Return: factorial of n
 */
int factorial(int n)
{
	int n;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
