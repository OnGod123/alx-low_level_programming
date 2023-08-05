#include <stdio.h>
int __atoi (char * s)
{
int result = 0;
while(*s != '\0')
{

result = result * 10 + (*s - '0');
s++;
}
return result;
}
