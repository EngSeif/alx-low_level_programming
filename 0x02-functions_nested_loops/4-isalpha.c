#include "main.h"

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
	return (c >= 97 && c <= 122 && c >= 65 && c <= 90);
}
