#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int length =0;
	int o;

	while (*s != '\n')
	{
		length++;
		s++;
	}
	s--;
	for (o = length; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
