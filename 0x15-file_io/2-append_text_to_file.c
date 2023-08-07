#include "main.h"
/**
 * append_text_to_file - appending a file.
 * @filename: parameter name of file.
 * @text_content: string content to add.
 * Return: -1 (fail), 1 (success).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, ws, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}


	o = open(filename, O_WRONLY | O_APPEND);
	ws = write(o, text_content, len);

	if (o == -1 || ws == -1)
		return (-1);


	close(o);
	return (1);

}
