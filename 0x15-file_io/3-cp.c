#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, otherwise 97, 98, 99, or 100
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, len;
    char buf[1024];

    /* check number of arguments */
    if (argc != 3)
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

    /* open source file for reading */
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

    /* create destination file with read and write permissions for user and group */
    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
    if (fd_to == -1)
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

    /* read from source file and write to destination file */
    while ((len = read(fd_from, buf, 1024)) > 0)
        if (write(fd_to, buf, len) != len)
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

    /* check for read error */
    if (len == -1)
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

    /* close file descriptors */
    if (close(fd_from) == -1)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
    if (close(fd_to) == -1)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

    return (0);
}

