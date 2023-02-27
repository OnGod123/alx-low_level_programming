#include "main.h"

/**
 * _strlen - check the code
 * @s: String input
 *
 * Return: The lenght of string s.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
