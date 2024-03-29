#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nestec loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to two dimmension array
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int x, y;

	if (width <=0 || height <=0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ar[x] = malloc(sizeof(int)* width);
		if (ar[x] == NULL)
		{
			for (; x>= 0; x--)
				free(ar[x]);

			free(ar);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ar[x][y]=0;
	}
	return (ar);
}
