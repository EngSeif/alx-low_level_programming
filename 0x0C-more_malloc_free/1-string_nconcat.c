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
	unsigned int s1_len, s2_len, i, j;

	/*check if the passed string is null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*calculte length of s1 and s2*/
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	if (n >= s2_len)
	{
		n = s2_len;
	}
	ptr = malloc(s1_len + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
