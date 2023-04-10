#include "main.h"
#define SIZEBUFF 1204
/**
 * main - copies the content of a file to anotheer file
 * @argv: argument vector
 * @argc: argument counter
 * Return: 0 when success
 */
int main(int argc, char **argv)
{
	char buff[SIZEBUFF];
	int n, file_1, file_2;

	/*check if arguments passed is 3*/
	if (!(argc == 3))
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	/*open system call*/
	file_1 = open(argv[1], O_RDONLY);
	if (file_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*0664 = rw-rw-r--*/
	file_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((n = read(file_1, buff, 1024)) > 0)
	{
		if (write(file_2, buff, n) != n || file_2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_1) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1), exit(100);
	if (close(file_2) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_2), exit(100);

	return (0);
}
