#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars.
 * @size: Size of the string
 * @c: The charcter for initialization
 *
 * Return: The pointer to the string
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;

	}
	s[i] = '\0';
	return (s);
}
