#include "main.h"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dptintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else
	{
		copy_text(argv[1], argv[2]);
	}		
}

int copy_text(const char *pepeFile, const char *juanFile)
{
	int copyMe, createMe;
	char *allChars = malloc(sizeof(char) * letters);

	copyMe = open(pepeFile, O_RDONLY);

	if(copyMe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
}
