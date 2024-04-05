#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
  * read_textfile - function that reads a text
  * file and prints it to the POSIX standard output.
  *
  * @filename: pointer of the file name
  *
  * @letters:  is the number of letters it
  * should read and print
  *
  * Return: return text and count of the text
  */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	int nread, nwrite;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);
	nread = read(fd, buf, letters);
	nwrite = write(STDOUT_FILENO, buf, nread);

	close(fd);

	free(buf);

	return (nwrite);


}
