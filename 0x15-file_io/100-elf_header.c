#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 64

/**
 * error_exit - Display an error message to stderr and exit with status 98.
 * @message: The error message to display.
 */

void error_exit(const char *message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

/**
 * print_elf_header_info - Display information from the ELF header.
 * @ehdr: Pointer to the ELF header.
 */

void print_elf_header_info(Elf64_Ehdr *header) {
  int i;
  printf("ELF Header:\n");
  printf("  Magic:   ");
  for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x%c ", header->e_ident[i], i < EI_NIDENT - 1 ? ' ': '\n');
    }    
    printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");    
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)": "Unknown");
    printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the ELF header display program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or an error code (e.g., 98) on failure.
 *
 * This function serves as the entry point for the ELF header display program. It
 * expects one command-line argument, which should be the name of an ELF file to
 * analyze. It opens the specified file, reads its ELF header, and displays
 * information contained in the ELF header. If the file is not an ELF file or if
 * any errors occur during the process, it exits with a status code of 98 and
 * displays an appropriate error message to stderr.
 */

int main(int argc, char *argv[])
{
  const char *filename;
  int fd;
  Elf64_Ehdr ehdr;
  ssize_t bytes_read;
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error");
        return (98);
    }

    Elf64_Ehdr header;
    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read == -1 || bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return (98);
    }
    
    print_elf_header_info(&header);
    close(fd);
    return (0);
}
