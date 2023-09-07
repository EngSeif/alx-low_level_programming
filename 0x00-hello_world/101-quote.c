#include <unistd.h>
/**
* main - Entry point
*
* Description: A C program that prints without printf or puts
*
* Return: Alawys 1 (not Success)
*/

int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(STDERR_FILENO, string, sizeof(string));
	return (1);
}
