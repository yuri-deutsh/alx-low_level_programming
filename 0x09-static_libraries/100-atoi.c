#include "main.h"

/**
 * _atoi - Convert a string into an integer.
 * @s: The string to convert.
 *
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int res = 0;
	int i = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}

	res *= sign;
	return (res);
}

