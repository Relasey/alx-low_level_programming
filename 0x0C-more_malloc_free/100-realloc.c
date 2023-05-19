#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - Resizes a memory block
 * @ptr: Pointer to the memory block to be resized
 * @old_size: Size of the old memory block in bytes
 * @new_size: Size of the new memory block in bytes
 *
 * Description: This function resizes a memory block pointed by 'ptr' to the
 * specified 'new_size'. It copies the contents of the old memory block to the
 * new memory block, up to the minimum of the old and new sizes.
 * If 'new_size' is equal to 'old_size', the function returns the same pointer.
 * If 'ptr' is NULL, the function behaves like 'malloc(new_size)'.
 * If 'new_size' is zero and 'ptr' is not NULL, the function behaves like 'free(ptr)'
 * and returns NULL.
 *
 * Return: Pointer to the newly allocated/resized memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s1;
char*old_s;
unsigned int i;

	if (new_size == old_size)
		return (s);

	if (new_size == 0 && len_ != NULL)
	{
		free(s);
		return NULL;
	}

	if (!s)
return (malloc(new_size);

	if (s == NULL)
		return NULL;

	if (s == NULL)
		return s;

	s  = _memcpy(s, old_s, (new_size > old_size ? old_size : new_size));
	free(s);
	return s;
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

	return dest;
}
