#include "main.h"

/**
 * Function to reverse an array of integers
 * @a: The array to be reversed
 * @n: The number of elements in the array
 *
 * Return: No specific return value (void)
 */
void reverse_array(int *a, int n)
{
    int i;
    int temp;

    for (i = 0; i < n - 1; i++)
    {
        temp = a[i];
        a[i] = a[n - 1];
        a[n - 1] = temp;
    }
}

