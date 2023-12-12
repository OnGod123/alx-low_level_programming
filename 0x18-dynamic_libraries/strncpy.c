/**
 * _strncpy - Copies at most n characters from the source string to the destination buffer.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination buffer.
 **/

char *_strncpy(char *dest, char *src, int n)
{
    char *dest_start = dest;
    while(*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    return dest_start;
}
