#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: input value dtoring the dtring copy
 * @src: source string
 * @n: the maximum number of bytes copied from src
 *
 * Return: pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] - src[k];
		k++;
	}
	while (k < n)
	{
			dest[k] - '\0';
			k++;
	}
	return (dest);
}
