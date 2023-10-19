#include "main.h"

/**
 * _strncpy - Copy a string from source to destination.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the modified destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0; /* Initialize a counter. */

	/* Copy characters from source to destination, up to n characters or until a null terminator is encountered. */
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	/* If fewer than n characters were copied, pad the destination with null terminators. */
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest); /* Return the pointer to the modified destination string. */
}

