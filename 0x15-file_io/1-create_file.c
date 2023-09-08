#include "main.h"

/**
 * create_file - Makes a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If func fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int gt, p, git = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (git = 0; text_content[git];)
			git++;
	}

	gt = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	p = write(gt, text_content, git);

	if (gt == -1 || p == -1)
		return (-1);

	close(gt);

	return (1);
}
