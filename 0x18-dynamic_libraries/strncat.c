/**
 * _strncat - Concatenates two strings, but with a limit on the number of characters.
 * @dest: The destination string.
 * @src: The source string to be concatenated.
 * @n: The maximum number of characters to concatenate.
 *
 * Return: A pointer to the resulting concatenated string (dest).
 */

char * _strncat(char *dest, char *src, int n)
{
    char *dest_start = dest;
    while(*dest != '\0')
    {
        dest++;
    }
    while(*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        n--;
    }
    *dest = '\0';
    return dest_start;
}


