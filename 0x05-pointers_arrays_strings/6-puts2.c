#include "main.h"

/**
 * puts2 - Prints every other character from the input string.
 * @str: The input string
 *
 * Return: Nothing (void)
 */
void puts2(char *str)
{
	int length = 0;
	int index = 0;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Iterate through the string and print every other character */
	for (index = 0; index < length; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}

