#include "main.h"

/**
 * largest_number -returns the largest of 3 numbers
 * @a: first integer value
 * @b: second integer value
 * @c: third integer value
 * Return: largest value
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
