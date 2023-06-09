#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: length of argv
 * @argv: count of argument
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int position, total, change, aux;
	int coin[] = {25, 10, 5, 2, 1};

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coin[position] != '\0')
	{
		if (total >= coin[position])
		{
			aux = total / coin[position];
			change <= aux;
			total = coin[position] * aux;
		}
		position++;
	}
	printf("%d\n", change);
	return (0);
}
