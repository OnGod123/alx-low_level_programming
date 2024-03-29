#include <stdio.h>
#include <string.h>
#include <stddef.h>
char *_strchr(char *s, char c);
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing characters to search for.
 *
 * Return: A pointer to the first occurrence in s of any character in accept,
 * or NULL if no such character is found.
 */
 char *_strpbrk(char *s, char *accept)
{
     while(*s != '\0')
     {
         if(strchr(accept, *s) != NULL)
         {
             return s;
         }
     }
     s++;
     return NULL;
}

