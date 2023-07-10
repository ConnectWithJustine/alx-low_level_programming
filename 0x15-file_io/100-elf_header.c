#include "main.h"
/**
 * get_magic - print magic numbers from ELF header if they exist, or exit
 * with error 98 if file is not ELF format
 * @ehdr: pointer to struct containing header features
 * @fname: name of file
 * @fd: file descriptor for `filename'
 */
void get_magic(Elf64_Ehdr *ehdr, char *fname, int fd)
{
	size_t i = 0;
	unsigned char *mgc = ehdr->e_ident;

	if (mgc[EI_MAG0] == ELFMAG0 &&
	    mgc[EI_MAG1] == ELFMAG1 &&
	    mgc[EI_MAG2] == ELFMAG2 &&
	    mgc[EI_MAG3] == ELFMAG3)
	{
		printf("Magic:  ");
		while (i < EI_NIDENT)
			printf(" %02x", ehdr->e_ident[i++]);
		printf("\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", fname);
		close(fd);
		exit(98);
	}
}

/* Other functions remain unchanged */

int main(int argc, char *argv[])
{
	int fd;
	ssize_t r;
	Elf64_Ehdr *helf;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_file>\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: could not open %s\n", argv[1]);
		exit(98);
	}
	helf = malloc(sizeof(Elf64_Ehdr));
	if (helf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: out of memory\n");
		close(fd);
		exit(98);
	}
	r = read(fd, helf, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: could not read %s\n", argv[1]);
		free(helf);
		close(fd);
		exit(98);
	}
	close(fd); // Close the file descriptor after reading the ELF header
	get_magic(helf, argv[1], fd);
	// Call other functions for further analysis
	free(helf);
	exit(EXIT_SUCCESS);
}
