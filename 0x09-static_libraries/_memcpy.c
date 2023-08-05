#include<stdio.h>
/**
 * _memcpy - copy from one character pointer to another
 * @dest: where the other character will be cpoied to
 * @src: the character to be copied into dest
 * @n: only positive numbers
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
{
*(dest + i) = *(src + 1);
}
return (dest);
}
