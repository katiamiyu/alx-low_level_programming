#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void _check_elf(unsigned char *e_nos);
void _print_magic(unsigned char *e_nos);
void _print_class(unsigned char *e_nos);
void _print_data(unsigned char *e_nos);
void _print_version(unsigned char *e_nos);
void _print_abi(unsigned char *e_nos);
void _print_osabi(unsigned char *e_nos);
void _print_type(unsigned int e_type, unsigned char *e_nos);
void _print_entry(unsigned long int e_entry, unsigned char *e_nos);
void _close_elf(int elf);

/**
 * _check_elf - Checks if for ELF file.
 * @e_nos: A pointer of ELF magic numbers.
 *
 * Return: void, exit code 98.
 */
void _check_elf(unsigned char *e_nos)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_nos[index] != 127 &&
		    e_nos[index] != 'E' &&
		    e_nos[index] != 'L' &&
		    e_nos[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _print_magic - display magic numbers of an ELF header.
 * @e_nos: array ELF magic numbers.
 *
 * Return: void
 */
void _print_magic(unsigned char *e_nos)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_nos[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * _print_class - display class of an ELF header.
 * @e_nos: array containing the ELF class.
 *
 * Return: void
 */
void _print_class(unsigned char *e_nos)
{
	printf("  Class:                             ");

	switch (e_nos[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_nos[EI_CLASS]);
	}
}

/**
 * _print_data - Display ELF header data.
 * @e_nos: array of ELF class.
 *
 * Return: void.
 */
void _print_data(unsigned char *e_nos)
{
	printf("  Data:                              ");

	switch (e_nos[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_nos[EI_CLASS]);
	}
}

/**
 * _print_version - Display version of ELF header.
 * @e_nos: Array containing the ELF version.
 *
 * Return: void.
 */
void _print_version(unsigned char *e_nos)
{
	printf("  Version:                           %d",
	       e_nos[EI_VERSION]);

	switch (e_nos[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * _print_osabi - Display the OS/ABI of ELF header.
 * @e_nos: Array containing the ELF version.
 *
 * Return: void.
 */
void _print_osabi(unsigned char *e_nos)
{
	printf("  OS/ABI:                            ");

	switch (e_nos[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_nos[EI_OSABI]);
	}
}

/**
 * _print_abi - Display the ABI version of ELF header.
 * @e_nos: Array containing the ELF ABI version.
 *
 * Return: void.
 */
void _print_abi(unsigned char *e_nos)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * _print_type - Display the type of ELF header.
 * @e_type: The ELF type.
 * @e_nos: Array containing the ELF class.
 *
 * Return: void.
 */
void _print_type(unsigned int e_type, unsigned char *e_nos)
{
	if (e_nos[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * _print_entry - Display the entry point of ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_nos: Array containing the ELF class.
 *
 * Return: void.
 */
void _print_entry(unsigned long int e_entry, unsigned char *e_nos)
{
	printf("  Entry point address:               ");

	if (e_nos[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_nos[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * _close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Return: void, when file cannot be closed - exit code 98.
 */
void _close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Entry point
 * @argc: Argument counts
 * @argv: pointers to the arguments.
 *
 * Return: Always 0 (success).
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_nos);
	print_class(header->e_nos);
	print_data(header->e_nos);
	print_version(header->e_nos);
	print_osabi(header->e_nos);
	print_abi(header->e_nos);
	print_type(header->e_type, header->e_nos);
	print_entry(header->e_entry, header->e_nos);

	free(header);
	close_elf(o);
	return (0);
}
