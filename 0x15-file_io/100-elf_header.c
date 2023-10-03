#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

#define ELF_MAGIC 0x464C457F

/**
 * print_elf_header_info - Print information from ELF header
 * @header: Pointer to the ELF header
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	printf("Magic:                              %02X %02X %02X %02X\n",
	       header->e_ident[EI_MAG0], header->e_ident[EI_MAG1],
	       header->e_ident[EI_MAG2], header->e_ident[EI_MAG3]);

	printf("Class:                              %s\n",
	       header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

	printf("Data:                               %s\n",
	       header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" :
	       (header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big-endian" : "Invalid"));

	printf("Version:                            %d (current)\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI:                             %d\n", header->e_ident[EI_OSABI]);

	printf("ABI Version:                        %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type:                               %s\n",
	       header->e_type == ET_REL ? "REL (Relocatable file)" :
	       (header->e_type == ET_EXEC ? "EXEC (Executable file)" :
	       (header->e_type == ET_DYN ? "DYN (Shared object file)" :
	       (header->e_type == ET_CORE ? "CORE (Core file)" : "Unknown"))));

	printf("Entry point address:                %#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", strerror(errno));
		return (98);
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header: %s\n", strerror(errno));
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	print_elf_header_info(&header);

	close(fd);
	return (0);
}
