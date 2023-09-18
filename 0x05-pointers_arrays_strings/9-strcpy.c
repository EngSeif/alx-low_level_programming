#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @src : holds the str value
 *
 * @dest : string to be copied from src
 *
 * Return: void
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
