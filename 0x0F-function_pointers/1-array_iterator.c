#include "function_pointers.h"

/**
 * array_iterator - Function with array
 * @array: Array
 * @size: Size
 * @action: Action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
