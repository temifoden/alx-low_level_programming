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

void print_elf_header_info(Elf64_Ehdr *ehdr) {
  int i;
  printf("  Magic:   ");
  for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", ehdr->e_ident[i]);
    }
    printf("\n");
    
    printf("  Class:                             %s\n", (ehdr->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", (ehdr->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone App\n");
            break;
        default:
            printf("<unknown: %x>\n", ehdr->e_ident[EI_OSABI]);
            break;
    }
    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (ehdr->e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %x>\n", ehdr->e_type);
            break;
    }
    printf("  Entry point address:               0x%lx\n", ehdr->e_entry);
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

int main(int argc, char *argv[]) {
  const char *filename;
  int fd;
  Elf64_Ehdr ehdr;
  ssize_t bytes_read;
    if (argc != 2) {
        error_exit("Usage: elf_header elf_filename");
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        error_exit("Error: Cannot open file");
    }

    bytes_read = read(fd, &ehdr, sizeof(Elf64_Ehdr));
    if (bytes_read != sizeof(Elf64_Ehdr)) {
        close(fd);
        error_exit("Error: Cannot read ELF header");
    }

    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3) {
        close(fd);
        error_exit("Error: Not an ELF file");
    }

    printf("ELF Header:\n");
    print_elf_header_info(&ehdr);

    close(fd);
    return 0;
}
