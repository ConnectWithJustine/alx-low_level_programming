#include "main.h"
/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: filename.
  * @text_content: text_content.
  * Return: 1 or -1.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, index;

	index = 0;
	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	op = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (op < 0)
		return (-1);
	while (text_content[index])
		index++;
	wr = write(op, text_content, index);
	if (wr < 0)
	{
		close(op);
		return (-1);
	}
	close(op);
	return (1);
}
