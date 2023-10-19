#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string to capitalize words.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int index = 0;

    while (str[index])
    {
        while (!(str[index] >= 'a' && str[index] <= 'z'))
            index++;  // Move to the next character.

        if (str[index - 1] == ' ' || str[index - 1] == '\t' || str[index - 1] == '\n'
            || str[index - 1] == ',' || str[index - 1] == ';' || str[index - 1] == '.'
            || str[index - 1] == '!' || str[index - 1] == '?' || str[index - 1] == '"'
            || str[index - 1] == '(' || str[index - 1] == ')' || str[index - 1] == '{'
            || str[index - 1] == '}' || index == 0)
        {
            str[index] -= 32;  // Convert the character to uppercase.
        }

        index++;  // Move to the next character.
    }

    return (str);
}

