#include<stdio.h>
/**
 * _strchr - a serach function
 * @s: a string to be searched from
 * @c: a character to be search from the string
 * Return: NULL
 */

char * _strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
