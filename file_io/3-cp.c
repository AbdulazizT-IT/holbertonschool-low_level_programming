#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int open_source(char *file)
{
	int fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (fd);
}

int open_dest(char *file)
{
	int fd = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (fd);
}

void copy_content(int fd_from, int fd_to, char *src, char *dest)
{
	ssize_t rd, wr;
	char buffer[1024];

	while ((rd = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr < 0 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

void close_fd(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int main(int ac, char *av[])
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_source(av[1]);
	fd_to = open_dest(av[2]);
	copy_content(fd_from, fd_to, av[1], av[2]);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
