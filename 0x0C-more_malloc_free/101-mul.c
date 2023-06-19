#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv)
{
    if (argc < 3){
        printf("Error\n");
        exit(98);
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int ans = num1 * num2;

    printf("%d\n", ans);
    return(0);
}
