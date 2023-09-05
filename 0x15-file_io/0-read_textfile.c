#include <stdio.h>
#include "main.h"

/**
 * read_textfile - a function that read file into a buffer
 * @filename: the name of the file to be read from
 * @letters: the numbers of alphabet to be read out
 *
 * Return: the data ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

FILE *fp;
char *buffer;
ssize_t bytes_read;

if (filename == NULL)
{
return (0);
}

fp = fopen(filename, "r");

if (fp == NULL)
{
return (0);
}

buffer = malloc(letters + 1);
if (buffer == NULL)
{
fclose(fp);
return (0);
}

memset(buffer, 0, letters + 1);

bytes_read = fread(buffer, sizeof(char), letters, fp);

if (bytes_read == -1)
{
fclose(fp);
free(buffer);
return (0);
}

printf("%s", buffer);

fclose(fp);
free(buffer);

return (bytes_read);
}

