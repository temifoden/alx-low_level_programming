#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>


#define BUFSIZE 1024

/**
 * main - Entry point for the cp program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or an error code(97-100) on failure.
*/

int main(int argc, char *argv[])
{
    char *file_from, *file_to;
    int fd_src, fd_dest;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFSIZE];
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = argv[1];
    file_to = argv[2];

    if (strcmp(file_from, file_to) == 0){
      dprintf(STDERR_FILENO, "Error: %s and %s are the same file\n", file_from, file_to);
      exit(100);
    }

    fd_src = open(file_from, O_RDONLY);
    if (fd_src == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }
    fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_dest == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        close(fd_src);
        exit(99);
    }
    bytes_read = 0;
    while((bytes_read == read(fd_src, buffer, BUFSIZE)) > 0){
        bytes_written = write(fd_dest, buffer, bytes_read);
        if (bytes_written == -1){
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            close(fd_src);
            close(fd_dest);
            exit(99);
        }
    }

    if (bytes_read == -1){
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close(fd_src);
        close(fd_dest);
        exit(98);
    }
    if(close(fd_src) == -1 || close(fd_dest) == -1){
        dprintf(STDERR_FILENO, "Error: Can't close fd\n");
        exit(100);
    }
    return (0);
}
