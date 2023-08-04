#include <unistd.h>

/**
 * _putchar - Prints out a character
 * @c: The charactter
 *
 * Return: The character
 */

char _putchar(int c)
{
	return (write(1, &c, 1));
}
