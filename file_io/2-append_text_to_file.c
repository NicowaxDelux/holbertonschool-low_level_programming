#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
  * append_text_to_file - Write a function that appends
  * text at the end of a file.
  *
  * @filename : is the name of the file
  *
  * @text_content: is the NULL terminated string to
  * add at the end of the file
  *
  *Return: 1 on success and -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrf;
	int lentext = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0664);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (lentext = 0; text_content[lentext]; lentext++)
			;

		wrf = write(fd, text_content, lentext);

		if (wrf == -1)
			return (-1);
	}

	close(fd);

	return (1);

}
