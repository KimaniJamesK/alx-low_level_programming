#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single numbers of base 10
 * starting from 0, followed by a new line
 * Return: Always 0 (succes)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
			putchar(a + '0');
			if (a < 9) 
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0)i;
}
