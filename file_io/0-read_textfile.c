#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file
 * @letters: size
 *
 * Return: num of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int cCount, saveMe = open(filename, O_RDONLY);
	char *allChars = malloc(sizeof(char) * letters);

	if (!filename)
	{
		return (0);
	}
	
	if (!allChars)
	{
		return (0);
	}
	
	if (saveMe == -1)
	{
		return (0);
	}
	
	cCount = read(saveMe, allChars, letters);
	write(STDOUT_FILENO, allChars, cCount);
	close(saveMe);
	
	return (cCount);
}
