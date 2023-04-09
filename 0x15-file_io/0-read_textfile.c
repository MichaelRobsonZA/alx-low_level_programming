#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file name
 * @letters: number of letters it should read and print
 *
 * Return:actual number of letters it read and print,or 0 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor for the file being read */
	char *buf; /* buffer for storing read content */
	ssize_t num_read, num_written; /* number of bytes read and written */

	if (filename == NULL) /* check for NULL filename */
		return (0);

	fd = open(filename, O_RDONLY); /* open file in read-only mode */
	if (fd == -1) /* check for open() failure */
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	/* allocate memory for buffer */
	if (buf == NULL) /* check for malloc() failure */
		return (0);

	num_read = read(fd, buf, letters); /* read from file into buffer */
	if (num_read == -1) /* check for read() failure */
	{
		free(buf); /* free allocated memory before returning */
		return (0);
	}

	num_written = write(STDOUT_FILENO, buf, num_read);
	/* write buffer to STDOUT */
	if (num_written == -1 || num_written != num_read)
		/* check for write() failure or incomplete write */
	{
		free(buf); /* free allocated memory before returning */
		return (0);
	}

	free(buf); /* free allocated memory */
	close(fd); /* close file descriptor */

	return (num_written); /* return number of characters written */
}

