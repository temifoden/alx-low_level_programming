#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * create_file -create a file with specific permissions and write content to it
 *
 * @filename: the name of the file to create
 * @text_content: A NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 * -1 if the file cannot be created, written to, or other errors occur.
 * 1 if the file is successfully created and written to.
*/

int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes_written;
    if (filename == NULL)
    return (-1);

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

    if (fd == -1)
    return (-1);

    if (text_content != NULL)
    {
        bytes_written = write(fd, text_content, strlen(text_content));

        if (bytes_written == -1)
        {
            close(fd);
            return (-1);
        }
    }
    close(fd);
    return (1);
}
