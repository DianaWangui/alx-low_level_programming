#include "main.h"
/**
 * append_text_to_file - a function that appends text at end of a file
 * @filename: name of file
 * @text_content: text to add at end of a file
 * Return: 1 success -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1 || filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
