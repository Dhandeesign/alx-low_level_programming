#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for buffer.
 * @file: Name of the file buffer is storing chars for.
 * Return: A pointer to newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: File descriptor to be closed.
 */
void close_file(int fd)
{
	int v;

	v = close(fd);

	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents of file to another file.
 * @argc: Num of arguments supplied to program.
 * @argv: Array of pointers to arguments.
 * Return: 0 on success.
 * Description: If argument count is incorrect - exit code 97.
 * If file_from does not exist or can't be read - exit code 98.
 * If file_to can't be created or written to - exit code 99.
 * If file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int prom, be, y, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	prom = open(argv[1], O_RDONLY);
	y = read(prom, buffer, 1024);
	be = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (prom == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(be, buffer, y);
		if (be == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		y = read(prom, buffer, 1024);
		be = open(argv[2], O_WRONLY | O_APPEND);

	} while (y > 0);

	free(buffer);
	close_file(prom);
	close_file(be);

	return (0);
}

