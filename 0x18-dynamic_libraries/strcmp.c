#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: An integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match, or be greater
 * than s2.
 */
 int strcmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}
