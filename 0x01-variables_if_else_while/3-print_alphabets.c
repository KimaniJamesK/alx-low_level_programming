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
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while(c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
