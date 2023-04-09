#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 *         -1 if file does not exist or cannot be written to.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, len;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open file with write and append permissions */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		/* Calculate length of text_content */
		for (len = 0; text_content[len] != '\0'; len++)
			continue;

		/* Write text_content to file */
		res = write(fd, text_content, len);

		/* Check for write errors */
		if (res == -1)
		{
			/* If there was an error, close the file and return -1 */
			close(fd);
			return (-1);
		}
	}

	/* Close file descriptor and return 1 to indicate success */
	close(fd);
	return (1);
}

