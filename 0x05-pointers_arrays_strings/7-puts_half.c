#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The input string.
 *
 * Description: If the length of the string is odd, it prints the characters
 * starting from (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

