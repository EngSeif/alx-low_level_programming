#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase alphabet
 *
 * Description: A C program that checks for lowercase alphabet
 * @c : holds value of charcter ascii
 *
 * Return: Always 0 (Success)
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
/**
 * _isalpha - checks for lowercase and uppercase alphabet
 *
 * Description: A C program that checks for lowercase alphabet alphabet
 * @c : holds value of charcter ascii
 *
 * Return: Always 0 (Success)
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
/**
 * _abs - checks for sign of no
 *
 * Description: A C program that checks for sign no
 * @n : holds value of ascii
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
/**
 * _isupper -vheck for upercase
 *
 * Description: A C program that checks for uppercase
 *
 * @c : holds ascii value
 *
 * Return:(Success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
/**
 * _strlen - returns the length of a string.
 *
 * @s : holds string value
 *
 * Return: void
*/

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
		c++;
	return (c);
}

/**
 * _puts - prints a string, followed by a new line
 *
 * @str : holds string value
 *
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

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

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

/**
 * _atoi - convert a string to an integer.
 *
 * @s : holds the str value
 *
 * Return: void
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;


	do {
		if (*s == '-')
		{
			sign *= -1;
		} else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		} else if (num > 0)
		{
			break;
		}
	} while (*s++);
	return (num * sign);
}

/**
 * *_strcat - concatenates two strings.
 *
 * @dest : holds 1st char valu
 *
 * @src : holds 2nd char value
 *
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
/**
 * *_strncat - concatenates two strings.
 *
 * @dest : holds 1st char valu
 *
 * @src : holds 2nd char value
 *
 * @n : bytes limit
 *
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
	int d1;
	int i;

	for (d1 = 0; dest[d1] != '\0'; d1++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i + d1] = src[i];
	}
	dest[i + d1] = '\0';

	return (dest);
}

/**
 * *_strncpy - copies a string.
 *
 * @dest : holds 1st char valu
 *
 * @src : holds 2nd char value
 *
 * @n : bytes limit
 *
 * Return: void
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

/**
 * _strcmp - copies a string.
 *
 * @s1 : holds 1st char valu
 *
 * @s2 : holds 2nd char value
 *
 * Return: void
*/

int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			c = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (c);
}

/**
 * *_memset - memory area pointed
 *
 * @s : holds 1st
 *
 * @b : holds value of byte
 *
 * @n : holds no of bytes
 *
 * Return: void
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_memcpy - a function that copies memory area.
 *
 * @dest : holds 1st mem
 *
 * @src : holds 2nd mem
 *
 * @n : holds no of bytes
 *
 * Return: void
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * *_strchr - locates a character in a string
 *
 * @s : holds 1st mem
 *
 * @c : holds 2nd mem
 *
 * Return: void
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s : holds 1st mem
 *
 * @accept : holds 2nd mem
 *
 * Return: void
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s : holds 1st mem
 *
 * @accept : holds 2nd mem
 *
 * Return: void
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
/**
 * *_strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
int iqe, jqe;

for (iqe = 0; haystack[iqe] > '\0'; iqe++)
{
	for (jqe = iqe; haystack[jqe] > '\0' && needle[jqe - iqe] > '\0'; jqe++)
	{
		if (haystack[jqe] != needle[jqe - iqe])
		{
			break;
		}
	}
	if (needle[jqe - iqe] == '\0')
	{
		return (haystack + iqe);
	}
}
return (0);
}
