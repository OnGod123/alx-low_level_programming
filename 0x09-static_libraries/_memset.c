#include<stdio.h>
char * _memset(char*s,char b,unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
{
*(s + 1) = b;
}
return s;
}
