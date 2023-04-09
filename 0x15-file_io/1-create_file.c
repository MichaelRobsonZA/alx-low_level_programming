#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: Name of the file to create
 * @text_content: Null-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written_bytes, text_length = 0;

	/* Check if filename or text_content is NULL */
	if (!filename)
		return (-1);

	/* Open the file in write-only mode, create if it does not exist, truncate if it does */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1) /* If open() fails, return -1 */
		return (-1);

	if (text_content) /* Check if text_content is not NULL */
	{
		/* Calculate the length of the text content */
		while (text_content[text_length])
			text_length++;

		/* Write text_content to the file */
		written_bytes = write(fd, text_content, text_length);
		if (written_bytes == -1) /* If write() fails, return -1 */
			return (-1);
	}

	/* Close the file descriptor */
	close(fd);

	return (1);
}

