#include <stdio.h>
#include "main.h"
/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The number to be converted to binary and printed.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);

_putchar((n & 1) + '0');
}

