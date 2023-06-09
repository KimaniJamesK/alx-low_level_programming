#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Count argument
 * @argv: Arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
