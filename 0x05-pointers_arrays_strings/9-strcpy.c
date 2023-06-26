#include <stdio.h>
#include <string.h>

/**
 * _strcpy - function to copy a string
 *
 * @dest: pointer to the string which is copied to 
 * @src: pointer to string which is copied
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
