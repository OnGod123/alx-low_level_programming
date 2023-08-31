#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to get the bit.
 * @index: The index of the bit to retrieve.
 * Return: The value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8) 
{
return (-10); 
}

unsigned long int mask = 1UL << index;
return (n & mask) ? 1 : 0;
}

