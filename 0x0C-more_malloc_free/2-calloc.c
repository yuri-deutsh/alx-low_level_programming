#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb of size bytes each.
 *
 * @nmemb: Number of elements to allocate.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;

	return (a);
}

