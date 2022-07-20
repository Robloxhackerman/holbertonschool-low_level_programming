#include "main.h"

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

void copy_text(const char *pepeFile, const char *juanFile)
{
	int copyMe, createMe, readMe;
	char allChars[1024];
	mode_t modsie = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	copyMe = open(pepeFile, O_RDONLY);

	if(copyMe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", pepeFile);
		exit(98);
	}
	
	createMe = open(juanFile, O_WRONLY | O_TRUNC | O_CREAT, modsie);
	readMe = read(copyMe, allChars, 1024);
	write(createMe, allChars, readMe);

}
