#include "main.h"
#include <stdio.h>

int usage_msg(void);
int cant_read(char *);
int cant_write(char *);
int cant_close(int);

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, exits with various codes on failure.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd_origin, fd_destiny, size;

	if (argc != 3)
		exit(usage_msg());

	fd_origin = open(argv[1], O_RDONLY);
	if (fd_origin == -1)
		exit(cant_read(argv[1]));

	fd_destiny = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_destiny == -1)
	{
		close(fd_origin);
		exit(cant_write(argv[2]));
	}

	while ((size = read(fd_origin, buffer, 1024)) != 0)
	{
		if (size == -1)
		{
			close(fd_origin);
			close(fd_destiny);
			exit(cant_read(argv[1]));
		}

		if (write(fd_destiny, buffer, size) == -1)
		{
			close(fd_origin);
			close(fd_destiny);
			exit(cant_write(argv[2]));
		}
	}

	if (close(fd_origin) == -1)
		exit(cant_close(fd_origin));

	if (close(fd_destiny) == -1)
		exit(cant_close(fd_destiny));

	return (0);
}

/**
 * usage_msg - Prints usage error message.
 * Return: Exit code 97.
 */
int usage_msg(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	return (97);
}

/**
 * cant_read - Prints read error message.
 * @fdin: Source file name.
 * Return: Exit code 98.
 */
int cant_read(char *fdin)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fdin);
	return (98);
}

/**
 * cant_write - Prints write error message.
 * @fdout: Destination file name.
 * Return: Exit code 99.
 */
int cant_write(char *fdout)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fdout);
	return (99);
}

/**
 * cant_close - Prints close error message.
 * @fd: File descriptor.
 * Return: Exit code 100.
 */
int cant_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (100);
}
