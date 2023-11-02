#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array of a number
 *           of elements each of an inputted byte size
 * @nmemb: number of elements
 * @size: byte size of each array element
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 *         Otherwise - a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);

	filler = memo;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (memo);
}
