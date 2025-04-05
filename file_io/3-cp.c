#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

int usage_msg(void);
int cant_read(char *filename);
int cant_write(char *filename);
int cant_close(int fd);

int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, written_bytes;
	char buffer[1024];

	if (argc != 3)
		exit(usage_msg());

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit(cant_read(argv[1]));

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		exit(cant_write(argv[2]));
	}

	if (fchmod(fd_to, 0664) == -1)
	{
		close(fd_from);
		close(fd_to);
		exit(cant_write(argv[2]));
	}

	while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes == -1)
		{
			close(fd_from);
			close(fd_to);
			exit(cant_write(argv[2]));
		}
	}

	if (read_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		exit(cant_read(argv[1]));
	}

	if (close(fd_from) == -1)
		exit(cant_close(fd_from));

	if (close(fd_to) == -1)
		exit(cant_close(fd_to));

	return (0);
}

int usage_msg(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	return (97);
}

int cant_read(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (98);
}

int cant_write(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (99);
}

int cant_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (100);
}
