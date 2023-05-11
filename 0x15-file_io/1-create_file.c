#include "main.h"
/**
 * create_file - create a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: success is 1 and failure is -1
 *
*/
int create_file(const char *filename, char *text_content)
{
int re_wr, re_op, len;
len = 0;
if (filename == NULL)
return (-1);
if (text_content)
{
while (text_content[len])
{
len++;
}
}
re_op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
re_wr = write(re_op, text_content, len);
if (re_op == -1 || re_wr == -1)
return (-1);
close(re_op);
return (1);
}
