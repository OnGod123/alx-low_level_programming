<<<<<<< HEAD
# include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');

}																								
=======
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Return: always 0
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}	
	putchar('\n');
	return (0);

}	
>>>>>>> dd7bfbf0a055510c8439354a57a09cf0f7fe7d36
