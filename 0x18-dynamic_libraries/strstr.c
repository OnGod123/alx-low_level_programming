#include <stdio.h>
#include <stddef.h>
#include <string.h>
/*
 * _strstr - locates a substring within a string
 * @haystack: the main string to search
 * @needle: the substring to find in haystack
 *
 * Return: a pointer to the beginning of the substring if found,
 *         otherwise, NULL
 */

char *_strstr(char *haystack, char *needle)
{
    while (*haystack) {
        char *start = haystack;
        char *pattern = needle;

       
        while (*haystack && *pattern && *haystack == *pattern) {
            haystack++;
            pattern++;
        }

      
        if (!*pattern) {
            return start;
        }

       
        haystack = start + 1;
    }

    return NULL; 
}

