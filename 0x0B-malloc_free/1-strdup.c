#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space.
 * @str: the string to be replicated
 *
 * Return: The pointer
 */

char *_strdup(char *str)
{
	char *new_str;
	int size = 0, i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		size++;

	new_str = malloc((size + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		new_str[j] = str[j];
	new_str[j] = '\0';
	return (new_str);
}
