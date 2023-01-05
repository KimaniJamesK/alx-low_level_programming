#include "main.h"
/**
 * _print_rev_recursion - prints the string in reverse
 * main - check the code
 * @s: the string
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
