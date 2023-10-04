#include <stdlib.h>
#include "main.h"
/**
* str_concat - concatenates two strings.
* @s1 : string 1
* @s2 : string 2
* Return: Alawys 0 (Success)
*/

char *str_concat(char *s1, char *s2)
{
	int i, size1 = 0, size2 = 0;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
		s2 = "";
	for (; s1[size1] != '\0'; size1++)
		;
	for (; s2[size2] != '\0'; size2++)
		;
	array = malloc((size1 + size2 + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size1 + size2; i++)
		{
			if (i < size1)
				array[i] = s1[i];
			else
				array[i] = s2[i - size1];
		}
	}
	array[i] = '\0';
	return (array);
}
