#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Prints a variable number of integers with a separator.
* @separator: The string to be printed between integers (or NULL if not needed).
* @n: The number of integers to print.
* @...: The integers to be printed.
*
* This function takes a variable number of integer arguments and prints them
* to the standard output. The integers are separated by the specified
* separator string, except for the last integer. If separator is NULL, no
* separator is printed.
*
* @separator: The separator string to print between integers.
* @n: The total number of integers to print.
* @...: The actual integers to be printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list kwargs;

unsigned int i;

va_start(kwargs, n);

for (i = 0; i < n; i++)
{
int decimal = va_arg(kwargs, int);
printf("%d", decimal);

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");

va_end(kwargs);
}

