#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * _strspn - Gets the length of a prefix substring consisting of only
 * characters in the accept string.
 * @s: The string to be scanned.
 * @accept: The string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
 unsigned int _strspn(char *s, char *accept)
{
     unsigned int count = 0;
     while(*s != '\0' && strchr(accept, *s) != NULL)
     {
         count++;
         s++;
     }
     return count;
}
