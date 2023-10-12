#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers followed by new line
 * @separator : between Numbers
 * @n : number of arguments
 * Return: Sum or Zero
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
