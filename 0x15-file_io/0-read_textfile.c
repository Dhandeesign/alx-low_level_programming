#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Text file print to STDOUT.
 * @filename: text file being read
 * @letters: num of letters to read
 * Return: w- actual num of bytes read and printed
 *        0 when func fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *feb;
	ssize_t gt;
	ssize_t p;
	ssize_t u;

	gt = open(filename, O_RDONLY);
	if (gt == -1)
		return (0);
	feb = malloc(sizeof(char) * letters);
	u = read(gt, feb, letters);
	p = write(STDOUT_FILENO, feb, u);

	free(feb);
	close(gt);
	return (p);
}
