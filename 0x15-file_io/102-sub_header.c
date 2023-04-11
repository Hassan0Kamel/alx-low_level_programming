#include "main.h"
/**
 * close_elf - Closes and ELF file
 * @elf: the file descriptor of ELF file
 * Description: if the file can't be closed - exit code 98.
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}


