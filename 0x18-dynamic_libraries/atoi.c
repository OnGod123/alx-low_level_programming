/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	/* Handle leading whitespaces */
	while (*s == ' ')
		s++;

	/* Handle the sign */
	if (*s == '-' || *s == '+') {
		sign = (*s == '-') ? -1 : 1;
		s++;
	}

	/* Convert the string to an integer */
	while (*s >= '0' && *s <= '9') {
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}

