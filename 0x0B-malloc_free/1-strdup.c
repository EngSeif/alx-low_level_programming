#include <stdlib.h>
#include "main.h"
/**
* *_strdup - returns a pointer to a newly allocated space in memor
* @str : char
* Return: Alawys 0 (Success)
*/

char *_strdup(char *str)
{
	int i, size = 0;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[size] != '\0'; size++)
	array = (char *)malloc(size  * sizeof(*str) + 1);
	if (array == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = str[i];
		}
	}
	return (array);
}
