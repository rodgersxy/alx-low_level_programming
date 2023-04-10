#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: file name
 * @text_content:  is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int length, fd, file_write;

	if (!filename)
		return (-1);

	/*open filename in read-write mode and append*/
	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		length = strlen(text_content);
		file_write = write(fd, text_content, length);

		if (file_write == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
