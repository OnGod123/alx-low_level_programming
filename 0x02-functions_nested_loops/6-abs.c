#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * @n: The number to be turned absolute
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	int abs;

	if (n < 0)
		abs = -1 * n;
	else if (n >= 0)
		abs = n;
	return (abs);
}
