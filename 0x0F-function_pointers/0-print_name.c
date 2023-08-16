/**
 * print_name - Outputs the name to stdout
 * @name: The string to be printed
 * @f: The pointer to a function to call on the name
 */

void print_name(char *name, void (*f)(char *))
{
	int i = 1;

	if (i)
	{
	f(name);
	}
}

