#include "main.h"
#include <stdlib.h>
/**
* *_memset - fills memory with a constant byte
* @s : pointer to a const
* @b : constant
* @n : max bytes to use
* Return: Always void (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
* *_calloc - allocates memory for an array
* @nmemb : No of elements of array
* @size : byte size of each element
* Return: Always void (Success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * sizeof(int));

	if (ptr == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);
	return (ptr);
}
