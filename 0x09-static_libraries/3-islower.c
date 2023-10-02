#include "main.h"

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
