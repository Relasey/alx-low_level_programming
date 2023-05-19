#include "main.h"
#include <stdlib.h>
/**
* _calloc - prints calloc
* @nmemb: array of memory
* @size: element
* Return: Pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *q;
	unsigned int i, b;

	b = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	q = malloc(b);
	if (q == NULL)
		return (NULL);

	for (i = 0; i < b; i++)
	{
		q[i] = 0;
	}
	return (q);
}
