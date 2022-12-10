#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Prints the last digit of a randomly generated number
 *
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++;)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
