#include "main.h"
/**
 * _putchar - a function that print value to stdout
 * @c: the variable value to be printed
 *
 * Return: the the data
 */
char _putchar(char c)
{
return(write(1, &c, 1));
}

