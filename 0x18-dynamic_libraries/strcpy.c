char * _strcpy(char *dest, const char *src)
{
    char * dest_start  = dest;
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest  = '\0';
    return dest_start;
}
