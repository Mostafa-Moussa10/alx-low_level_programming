#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

/*liberaries*/
#include <stddef.h>
#include <stdlib.h>

/*prototype declerations*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int a, int b);
int _putchar(char c);
#endif
