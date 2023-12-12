/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be concatenated.
 *
 * Return: A pointer to the resulting concatenated string (dest).
 */
 char * _strcat(char *dest, char *src)
{
     char *dest_start = dest;
     while(*dest != '\0')
     {
         dest++;
     }
     while(*src != '\0')
     {
         *dest = *src;
         dest++;
         src++;
     }
     *dest = '\0';
     return dest_start;

}
