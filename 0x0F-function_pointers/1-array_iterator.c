#include "function_pointers.h"

/**
 * array_iterator - function given as an element of an array.
 * @array: integer
 * @size: size
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
