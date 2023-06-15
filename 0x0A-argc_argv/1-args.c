#include <stdio.h>
#include "main.h"

/**
 * main - print program
 * @argc: argument number
 * @argv: arguement arrays
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
