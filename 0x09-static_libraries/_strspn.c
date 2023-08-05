#include <stdio.h>
#include "main.h"

unsigned int_strspn(char* s, char* accept)
{
unsigned int count = 0;
while (*s != '\0' && _strchr(accept,*s) != NULL)
{
count++;
s++;
}
return count;
}
