#include "main.h"
/**
 * _puts_ recursion - this function print out
 * @s; the string
  */
 void _puts_recursion(char *s){
     if(*s == '\0'){
         _putchar('\n');
         return;
     }
     _putchar(*s);
     s++;
     _puts_recursion(s);
 }
