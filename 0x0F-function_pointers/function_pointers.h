#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_
void array_iterator(int *array, int size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int op_add(int a, int b);
int op_div(int a, int b);
int op_sub(int a, int b);
int op_mod(int a, int b);
int op_add(int a, int b);
#endif
