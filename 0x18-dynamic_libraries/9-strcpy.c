#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int src_length = 0;
	int x;

	/* Calculate the length of the source string */
	while (*(src + src_length) != '\0')
	{
		src_length++;
	}

	/* Copy the source string to the destination string */
	for (x = 0; x < src_length; x++)
	{
		dest[x] = src[x];
	}

	/* Null-terminate the destination string */
	dest[src_length] = '\0';

	return (dest);
}

