#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @array: array with the elements
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index of first element
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
