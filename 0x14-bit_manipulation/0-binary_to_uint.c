#include <stdio.h>
#include <stddef.h>
/**
 * binary_to_uint - converts strings to positive interger
 * @b: the pointer to the character to be converted
 *
 * Return: the num after it been converted
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b != '0' && *b != '1')
return (0);

num = (num << 1) + (*b - '0');
b++;
}

return (num);
}

