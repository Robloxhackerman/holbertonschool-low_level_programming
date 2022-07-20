#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of file.
 * @text_content: content.
 * Return: 1 success, -1 failure.
 */
int create_file(const char *filename, char *text_content)
{
	int createMe;

	if (!filename)
	{
		return (-1);
	}
	createMe = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (createMe == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		write(createMe, text_content, strlen(text_content));
	}
	close(createMe);
	return (1);
}
