#include "main.h"
/**
 * read_textfile -  a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: a pointer to file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	/*declaration of three integer variables*/
	int open_file, x = 0, y = 0;

	if (filename == NULL)
	{
		return (0);
	}
	/*dynamically memory allocation*/
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}
	/*open system call to open file*/
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
	{
		return (0);
	}
	/*read system call to read letters*/
	x = read(open_file, buffer, letters);
	y = write(STDOUT_FILENO, buffer, x);

	if (y == -1)
	{
		return (0);
	}

	close(open_file);
	free(buffer);/*free*/
	return (x);
}
