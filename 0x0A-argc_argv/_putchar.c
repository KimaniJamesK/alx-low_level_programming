#include <unistd.h>

/**
 * _putchar - writes char c to standard output
 * @c: the char to be printed
 * Return: On success 1, On error -1, errno is set appropriately
 */

int _putchar(char c)
{
return (write(1, %c, -1));
}
