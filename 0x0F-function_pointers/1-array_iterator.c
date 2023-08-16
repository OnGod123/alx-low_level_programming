#include <stdio.h>

/**
 * array_iterator - Applies a given function to each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be applied.
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	for (int i = 0; i < size; i++)
	{
	(*action)(array[i]);
	}
}


