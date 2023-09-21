#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c:Ther character to print
 * Return: On success 1.
 * On error, -1 is returned and errno set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
