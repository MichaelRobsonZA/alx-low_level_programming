#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file with given name and writes given content to it
 * @filename: name of the file to create
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, written;

/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

/* Calculate length of text_content */
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

/* Open file with write-only mode, create it if it doesn't exists */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

/* Write text_content to file if it's not NULL */
	if (text_content != NULL)
	{
/* Write text_content to file descriptor */
		written = write(fd, text_content, len);

/* Check if write was successful */
		if (written == -1 || written != len)
		{
/* If write failed, close file descriptor and return -1 */
			close(fd);
			return (-1);
		}
	}

/* Close file descriptor */
	close(fd);


/* Return 1 to indicate success */
	return (1);
}

