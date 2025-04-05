#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

int usage_error(void);
int read_error(char *filename);
int write_error(char *filename);
int close_error(int fd);

/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: argument values (file_from, file_to)
 *
 * Return: 0 on success, exits with codes 97, 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		exit(usage_error());

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit(read_error(argv[1]));

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		exit(write_error(argv[2]));
	}

	while ((r_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			close(fd_from);
			close(fd_to);
			exit(write_error(argv[2]));
		}
	}

	if (r_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		exit(read_error(argv[1]));
	}

	if (close(fd_from) == -1)
		exit(close_error(fd_from));
	if (close(fd_to) == -1)
		exit(close_error(fd_to));

	return (0);
}

/**
 * usage_error - prints usage error
 * Return: exit code 97
 */
int usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	return (97);
}

/**
 * read_error - prints read error message
 * @filename: name of the file that can't be read
 * Return: exit code 98
 */
int read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (98);
}

/**
 * write_error - prints write error message
 * @filename: name of the file that can't be written to
 * Return: exit code 99
 */
int write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (99);
}

/**
 * close_error - prints error when file descriptor can't be closed
 * @fd: file descriptor
 * Return: exit code 100
 */
int close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (100);
}
