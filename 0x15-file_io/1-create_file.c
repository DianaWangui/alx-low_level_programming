#include "main.h"
/**
 *  create_file - a func that creates a file
 *  @filename: name of file created
 *  @text_content: null terminated string to write to the file
 *  Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
