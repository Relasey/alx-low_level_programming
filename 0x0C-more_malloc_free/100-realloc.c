#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - Resizes a memory block
 * @ptr: Pointer to the memory block to be resized
 * @old_size: Size of the old memory block in bytes
 * @new_size: Size of the new memory block in bytes
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);

	if (s == NULL)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (s);

	s  = _memcpy(s, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);

	return (s);
}

/**
 * _memcpy - Copies memory from source to destination
 * @dest: Pointer to destination
 * @src: Pointer to the source memory block
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the destination memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
		dest[g] = src[g];

	return (dest);
}
