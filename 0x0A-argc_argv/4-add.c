#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check strings if they are digits
 * @str: array str
 * Return: 0 on success
 */

int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
	if (!isdigit(str[i]))
	{
		return (0);
	}
	i++;
	}
	return (1);
}

/**
 * main - prints the name of the program
 * @argc: count arguments
 * @argv: Arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int str_to_int;
	int sum = 0;

	i = 3;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			str_to_int = atoi(argv[i]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
