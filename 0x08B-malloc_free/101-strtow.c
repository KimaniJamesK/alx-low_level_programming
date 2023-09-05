#include <stdlib.h>
#include "main.h"
/**
 * count_word - function helps to count the number of words in string
 * @s: the string
 * Return: number of words
 */
int count_word(char *s)
{
	int alarm,c,w;

	alarm = 0;
	w=0;

	for (c=0; s[c] != '\0'; c++)
	{
		if (s[c] == '')
			alarm = 0;
		else if (alarm==0)
		{
			alarm =1;
			w++;
		}
	}
	return (w);
}
/**
 * strtow - split string into chars
 * @str: string to split
 * Return: pointer to an array of strings on success, NULL on error
 */
char **strtow(char *str)
{
	char **grid, *tmp;
	int i,k=0, len =0,words,c=0,start,finish;
	while (*(str+len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	grid = (char **) malloc(sizeof(char *)* (words + 1));
	if (grid == NULL)
		return (NULL);
	for (i=0; i<=len; i++)
	{
		if (str[i] == '' || str[i] == '\0')
		{
			if (c)
			{
				finish = i;
				tmp = (char *)malloc(sizeof(char)*(c+1));
				if (tmp == NULL)
					return (NULL);
				while (start < finish)
					*tmp++ = str[start++];
				*tmp = '\0';
				grid[k] = tmp - c;
				k++;
				c=0
			}
		}
		else if (c++ == 0)
			start = i;
	}
	grid[k] = NULL;
	return (grid);
}
