#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print characters followed by new line
 * @separator : between Numbers
 * @n : number of arguments
 * Return: Sum or Zero
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
