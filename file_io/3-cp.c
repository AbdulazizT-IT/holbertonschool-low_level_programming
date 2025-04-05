#include "main.h"
#include <stdio.h>

int usage_msg(void);
int cant_read(char *);
int cant_write(char *);
int cant_close(int);

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd_origin, fd_destiny, size = 1024, error = -1;

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

	while ((size = read(fd_origin, buffer, 1024)) > 0)
	{
		error = write(fd_destiny, buffer, size);
		if (error == -1)
		{
			close(fd_origin);
			close(fd_destiny);
			exit(cant_write(argv[2]));
		}
	}
	if (size == -1)
	{
		close(fd_origin);
		close(fd_destiny);
		exit(cant_read(argv[1]));
	}

	if (close(fd_origin) == -1)
		exit(cant_close(fd_origin));
	if (close(fd_destiny) == -1)
		exit(cant_close(fd_destiny));

	return (0);
}

int usage_msg(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	return (97);
}

int cant_read(char *fdin)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fdin);
	return (98);
}

int cant_write(char *fdout)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fdout);
	return (99);
}

int cant_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (100);
}
