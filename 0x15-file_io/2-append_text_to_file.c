#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: the name of the file.
 * @text_content: the Null-terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 *
 * This function appends the specified text content to the end of the file
 * specified by 'filename'. If the file does not exist or if you do not have
 * the required permissions to write the file, it returns -1. If 'filename' is
 * NULL, it returns -1. If 'text_content' is NULL, it does not add anything to
 * the file and returns 1. If the append operation is successful, it returns
*/
int append_text_to_file(const char *filename, char *text_content)
{
  int fd;
    ssize_t bytes_written;
    if (filename == NULL)
    return (-1);

    if (text_content == NULL)
    return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
    return (-1);
    
    bytes_written = write(fd, text_content, strlen(text_content));
    if (bytes_written == -1)
    {
        close(fd);
        return (-1);
    }

    close(fd);
    return (1);    
}
