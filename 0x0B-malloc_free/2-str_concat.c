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
	int i, s1 = 0, s2 = 0;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
		s2 = "";
	for (; str[s1] != '\0'; s1++)
		;
	for (; str[s2] != '\0'; s2++)
		;
	array = malloc((s1 + s2 + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= s1 + s2; i++)
		{
			if (i < s1)
				array[i] = s1[i];
			else
				array[i] = s2[i - s1];
		}
	}
	m[i] = '\0';
	return (array);
}
