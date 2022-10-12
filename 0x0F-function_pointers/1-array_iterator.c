#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	for (int i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
