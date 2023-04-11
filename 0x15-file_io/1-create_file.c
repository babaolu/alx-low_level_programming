#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Pathname of file
 * @text_content: String to write to file
 *
 * Return: 1 on Success
 * -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, str_len = 0;
	char *temp_txt = text_content;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	if (!text_content)
		return (1);

	while (*temp_txt)
	{
		str_len++;
		temp_txt++;
	}

	len = write(fd, text_content, str_len);
	if (len < str_len)
		return (-1);

	return (1);
}
