#include "main.h"

/**
 * main - check the code.
 *_putcar - return strings
 * _islower - return small case
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
