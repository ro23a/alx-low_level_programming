#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search in
 * @cmp: a pointer to the function to be used to compare values
 * @size: the number of elements in the array array
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return(i);
		}
	}
}
