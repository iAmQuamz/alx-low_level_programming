#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - this allocate the memory for an array called usingmalloc
 * @nmemb: the number elements
 * @size: the size of bytes
 * Return: void pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
