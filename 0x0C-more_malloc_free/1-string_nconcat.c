#include <stdlib.h>

/**
* *string_nconcat - concatenates two strings
* @n : size of memory of s2 be allocated
* @s1 : first string
* @s2 : second string
* Return: Always void (Success)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr; 
	unsigned int i, j, k;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[i] != '\0'; j++)
		;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= j)
	{ 
		n = j;
	}
	ptr = malloc(sizeof(*s1) + n);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < sizeof(s1); k++)
		ptr[k] = s1[k];

	for (; k < n; k++)
		ptr[k] = s2[k];
	ptr[n] = '\0';
	return (ptr);
}
