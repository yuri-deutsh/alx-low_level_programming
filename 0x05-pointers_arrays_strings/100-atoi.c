int _atoi(char *s)
{
	int i = 0;
	int d = 0;  /* Tracks the number of '-' signs */
	int n = 0;  /* The integer result */
	int len = 0; /* Length of the string */
	int f = 0; /* Flag to indicate if a valid integer is found */
	int digit = 0; /* Temporary variable to hold the current digit */

	/* Calculate the length of the string */
	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

