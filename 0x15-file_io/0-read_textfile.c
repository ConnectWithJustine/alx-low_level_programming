#include "main.h"
/**
  * read_textfile - reads a text file and prints it to the
  * POSIX standard output.
  * @filename: filename.
  * @letters: size.
  * Return: ssize_t.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *save;
	int op, rd, wr;

	if (!filename)
		return (0);
	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);

	save = malloc(sizeof(char) * letters);
	if (!save)
	{
		close(op);
		return (0);
	}

	rd = read(op, save, letters);
	if (rd < 0)
	{
		close(op);
		free(save);
		return (0);
	}
	wr = write(STDOUT_FILENO, save, rd);
	if (wr < 0)
	{
		close(op);
		free(save);
		return (0);
	}
	close(op);
	free(save);
	return (rd);
}
