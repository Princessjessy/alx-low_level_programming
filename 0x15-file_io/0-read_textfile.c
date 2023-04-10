#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	char *buff;
	ssize_t wt, rd;

	if (!filename)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		close(i);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(i);
		return (0);
	}

	wt = read(i, buff, letters);

	if (wt == -1)
	{
		close(i);
		free(buff);
		return (0);
	}

	rd = write(STDOUT_FILENO, buff, wt);

	if (rd == -1)
	{
		close(i);
		free(buff);
		return (0);
	}
	close(i);
	return (wt);
}
