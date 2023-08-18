#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints a variable number of strings with a separator.
 * @separator: The string to be printed between strings (or NULL if not needed).
 * @n: The number of strings to print.
 * @...: The strings to be printed.
 *
 * This function takes a variable number of string arguments and prints them
 * to the standard output. The strings are separated by the specified
 * separator string. If a separator is provided and a string is NULL, "nil"
 * is printed instead. If separator is NULL, no separator is printed.
 *
 * @separator: The separator string to print between strings.
 * @n: The total number of strings to print.
 * @...: The actual strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list1;
va_start(list1, n);

for (i = 0; i < n; i++)
{
char *value = va_arg(list1, char *);
if (separator != NULL)
{
if (value == NULL)
{
printf("nil");
}
else
{
printf("%s", value);
printf("%s", separator);
}
}
}

va_end(list1);
}

