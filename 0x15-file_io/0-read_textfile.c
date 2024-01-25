#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
* read_textfile - function reads the content of a file to standard output
* @filename: the file containing the content to read
* @letters: number of elements to read
*
* Return: written_bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int fd;
ssize_t bytes_read, bytes_written;
if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = (char *)malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (bytes_written);
}
