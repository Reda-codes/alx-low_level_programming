#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb : number of elements in array
 * @size: size of each elemnt
 * Return: pointer to the allocated memory or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);

	while (i < (nmemb * size))
		ar[i++] = 0;

	return (ar);
}
