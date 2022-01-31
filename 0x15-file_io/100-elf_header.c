#include "holberton.h"
#include <elf.h>

/**
 * is_elf - Validates if a file is an ELF file by comparing the first 4 bytes
 *          of the header of the file with the 4 bytes of an ELF file.
 * @e_ident: The array of bytes passing as the identifier of the file.
 *
 * Return: 98 if file is not a valid ELF.
 */
void is_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != 0x7f && e_ident[EI_MAG1] != 'E' &&
	    e_ident[EI_MAG2] != 'L' && e_ident[EI_MAG3] != 'F')
		dprintf(STDERR_FILENO, "Error: File not a valid ELF\n"), exit(98);
}

/**
 * get_magic - Prints the magic number.
 * @e_ident: The array of bytes passing as the identifier of the file.
 */
void get_magic(unsigned char *e_ident)
{
	short counter;

	counter = 0;
	printf("  %-9s", "Magic:");
	while (counter < EI_NIDENT)
	{
		printf("%2.2x", e_ident[counter]);
		if (counter != EI_NIDENT - 1)
			printf(" ");
		counter++;
	}
	printf("\n");
}

/**
 * get_class - Prints the architecture for this binary.
 * @e_ident: The array of bytes passing as the identifier of the file.
 */
void get_class(unsigned char *e_ident)
{
	printf("  %-34s ", "Class:");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none");
		break;
	case ELFCLASS32:
		printf("ELF32");
		break;
	case ELFCLASS64:
		printf("ELF64");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
		break;
	}
	printf("\n");
}

/**
 * get_data - Prints the data encoding of the processor-specific data
 *            in the file.
 * @e_ident: The array of bytes passing as the identifier of the file.
 *
 * Return: The value of the data encoding.
 */
short get_data(unsigned char *e_ident)
{
	short data;

	data = 0;
	printf("  %-34s ", "Data:");
	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none");
		data = 0;
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian");
		data = 1;
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian");
		data = 2;
		break;
	default:
		printf("<unknown: %x>", e_ident[EI_DATA]);
		data = -1;
		break;
	}
	printf("\n");
	return (data);
}

/**
 * get_version - Prints the version number of the ELF specification.
 * @e_ident: The array of bytes passing as the identifier of the file.
 */
void get_version(unsigned char *e_ident)
{
	printf("  %-34s %d", "Version:", e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)");
	if (e_ident[EI_VERSION] == EV_NONE)
		printf(" <unknown>");
	printf("\n");
}

/**
 * get_osabi - Prints the operating system and ABI (Application Binary
 *             Interface) to which the file is targeted.
 * @e_ident: The array of bytes passing as the identifier of the file.
 */
void get_osabi(unsigned char *e_ident)
{
	printf("  %-34s ", "OS/ABI:");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64");
		break;
	case ELFOSABI_OPENBSD:
		printf("UNIX - OpenBSD");
		break;
	case ELFOSABI_ARM:
		printf("ARM");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App");
		break;
	default:
		printf("<unknown: %x>", e_ident[EI_OSABI]);
	}
	printf("\n");
}

/**
 * get_type - Prints the file type of the file.
 * @data: The data encoding.
 * @e_type: The object file type.
 */
void get_type(short data, uint16_t e_type)
{
	uint16_t type;

	type = e_type;

	if (data == ELFDATA2MSB)
		type = type >> 8;

	printf("  %-34s ", "Type:");
	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)");
		break;
	case ET_REL:
		printf("REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)");
		break;
	case ET_CORE:
		printf("CORE (Core file)");
		break;
	default:
		printf("<unknown:> %x", e_type);
		break;
	}
	printf("\n");
}

/**
 * get_entry - Prints the virtual address from which the process will start.
 * @data: The data encoding.
 * @e_entry: The entry point address.
 */
void get_entry(short data, unsigned int e_entry)
{
	unsigned int address;

	address = e_entry;

	printf("  %-34s ", "Entry point address:");
	if (data == ELFDATA2MSB)
		address = (((address >> 24) & 0x000000ff) |
			   ((address >> 8) & 0x0000ff00) |
			   ((address << 8) & 0x00ff0000) |
			   ((address << 24) & 0xff000000));
	printf("%#x", address);
	printf("\n");
}

/**
 * main - Prints some metadata about an ELF file.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Description: This program prints the magic number, class, data encoding,
 *              version, OS/ABI, file type and entry address of an ELF file,
 *              much like how the program readelf-2.26 -h file would.
 * Return: 0 if success. 98 if file couldn't be opened, read or closed,
 *         memory couldn't be allocated to save the file's header.
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;
	const char *file;
	int f_des;
	short data;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: %s file\n", argv[0]), exit(98);

	header = malloc(sizeof(*header));
	if (header == NULL)
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n"), exit(98);

	file = argv[1];
	f_des = open(file, O_RDONLY);
	if (f_des == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file), exit(98);

	if (read(f_des, header, sizeof(Elf64_Ehdr)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file), exit(98);

	is_elf(header->e_ident);

	printf("ELF Header:\n");
	get_magic(header->e_ident);
	get_class(header->e_ident);
	data = get_data(header->e_ident);
	get_version(header->e_ident);
	get_osabi(header->e_ident);
	printf("  %-34s %d\n", "ABI Version:", header->e_ident[EI_ABIVERSION]);
	get_type(data, header->e_type);
	get_entry(data, (unsigned int) header->e_entry);

	free(header);
	if (close(f_des) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_des), exit(98);

	return (0);
}
