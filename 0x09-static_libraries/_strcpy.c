#include<stdio.h>
char* _strcpy(char * dest, char* src)
{
char*dest_orig = dest;
while(*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return dest_orig;
}
