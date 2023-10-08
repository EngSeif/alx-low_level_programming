#include <stdlib.h>

/**
* *_calloc - allocates memory for an array
* @nmemb : No of elements of array
* @size : byte size of each element
* Return: Always void (Success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * sizeof(int));

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
