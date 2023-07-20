#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function to excute acion of an array
 *
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function that include the action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

