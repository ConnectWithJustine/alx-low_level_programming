#include "main.h"
void print_error(const char *message);
void get_type(Elf64_Ehdr *ehdr);
/**
 * get_type - determine file type
 * @ehdr: pointer to struct of ELF header features
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

void get_type(Elf64_Ehdr *ehdr)
{
	printf("%-35s", "Type:");
	switch (ehdr->e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
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
			printf("Unknown type\n");
			break;
	}
}

int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error opening file");
	}
	Elf64_Ehdr elf_header;
	ssize_t bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		print_error("Error reading ELF header");
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	printf("  Magic:   ");

	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
		elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");

	printf("  Data:                              %s\n",
		elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
		(elf_header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid data encoding"));
	
	printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);

	printf("  OS/ABI:                            %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
		(elf_header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" :
		(elf_header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" : "Other")));
	
	printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
	get_type(&elf_header);

	printf("  Entry point address:               0x%lx\n", elf_header.e_entry);

	close(fd);
	return (0);
}
