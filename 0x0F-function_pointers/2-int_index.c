#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - returns the index of the first element for which
 * the cmp function does not return 0
 * @size: number of elements in the array
 * @array: array with the elements
 * @cmp: is a pointer to the function to be used to compare values
 * @Return: return -1 if no elements dont match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
}
