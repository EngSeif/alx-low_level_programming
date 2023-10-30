#include "main.h"
/**
 * read_textfile - gets the number of printed chars
 * @filename : pointer to filename
 * @letters : sizeof letters
 * Return: 1 (Success), or -1 (Fail)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(letters + 1);
	FILE *fp = fopen(filename, "r");
	ssize_t bytes_read = fread(buffer, 1, letters, fp);
	ssize_t bytes_written = fwrite(buffer, 1, bytes_read, stdout);

	if (filename == NULL)
		return (0);
	if (fp == NULL)
		return (0);
	if (buffer == NULL)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	if (bytes_read < 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	buffer[bytes_read] = '\0';

	if (bytes_written < 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);

	return (bytes_written + 1);

}
