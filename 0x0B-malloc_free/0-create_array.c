#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size 'size' and assigns 'c' to each element
 * @size: size of the array
 * @c: character to assign
 *
 * Description: This function creates an array of 'size' elements and assigns the
 * character 'c' to each element.
 *
 * Return: A pointer to the array, or NULL if allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}

