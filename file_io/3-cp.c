#include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @argc: num of args
 * @argv: args
 *
 * Return: coso
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_text(argv[1], argv[2]);
	exit(0);
}

/**
 * copy_text - copies the content of a file to another file
 *
 * @pepeFile: file to be copied
 * @juanFile: file to paste de content
 *
 * Return: coso
 */
void copy_text(const char *pepeFile, const char *juanFile)
{
	int copyMe, createMe, readMe, writeMe;
	char allChars[4096];
	mode_t modsie = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	copyMe = open(pepeFile, O_RDONLY);
	if (copyMe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", pepeFile);
		exit(98);
	}
	createMe = open(juanFile, O_WRONLY | O_TRUNC | O_CREAT, modsie);
	readMe = read(copyMe, allChars, 4096);
	writeMe = write(createMe, allChars, readMe);
	if (createMe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", juanFile);
		exit(99);
	}
	if (readMe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", pepeFile);
		exit(98);
	}
	if (writeMe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", juanFile);
		exit(99);
	}
	if (close(createMe) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", createMe);
		exit(100);
	}
	if (close(copyMe) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copyMe);
		exit(100);
	}
}
