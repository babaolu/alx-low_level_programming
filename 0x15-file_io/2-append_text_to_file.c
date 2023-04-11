#include "main.h"

/**
 * append_text_to_file - Appends to a file
 * @filename: Pathname of file
 * @text_content: String to write to file
 *
 * Return: 1 on Success
 * -1 on Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, str_len = 0;
	char *temp_txt = text_content;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (*temp_txt)
	{
		str_len++;
		temp_txt++;
	}

	len = write(fd, text_content, str_len);
	if (len < str_len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
