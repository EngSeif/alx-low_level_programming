#include <stdlib.h>
#include "main.h"
/**
* *create_array -  creates an array of chars
* @size : size of array
* @c : specific char
* Return: Alawys 0 (Success)
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (0);
}