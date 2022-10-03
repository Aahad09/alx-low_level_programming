#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initialises it with a specific char
 * @size: size of the array
 * @c: character to insert
 * Return: NULL if size is zero or if it fails,
 * pointer to array if everything is normal
 */

char *create_array(unsigned int size, char c)
{
char *cr;
unsigned int i;

if (size == 0)
	return (NULL);
cr = malloc(sizeof(c) * size);

if ([cr] = NULL)
	return (NULL);

for (i = 0; i < size; i++)
	cr[i] = c;
return (cr);
}
