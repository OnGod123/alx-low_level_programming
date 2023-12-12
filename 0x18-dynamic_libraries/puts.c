#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * _puts - Prints a string followed by a new line to stdout.
 * @s: The input string.
 */
 void _puts(char *s)
{
 while(*s != '\0')
 {
         putchar(*s);
         s++;
     		
}
     putchar('\n');
}

