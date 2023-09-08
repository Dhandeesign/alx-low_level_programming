#include "main.h"

/**
 * append_text_to_file - Appends text at the end of file.
 * @filename: A pointer to the name of file.
 * @text_content: The string to add to the end of file.
 * Return: If func fails or filename is NULL - -1.
 *         If file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int t, p, git = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (git = 0; text_content[git];)
			git++;
	}

	t = open(filename, O_WRONLY | O_APPEND);
	p = write(t, text_content, git);

	if (t == -1 || p == -1)
		return (-1);

	close(t);

	return (1);
}

