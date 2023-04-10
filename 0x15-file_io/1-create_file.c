#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: name of the file to be created
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 if is succesful otherwise -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	/*declare variables fd= file descriptor*/
	int length, fd, file_write;
	/*check if filename is NULL*/
	if (!filename)
		return (-1);
	/*create file,read-write mode*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		length = strlen(text_content);
		file_write = write(fd, text_content, length);

		if (file_write == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
