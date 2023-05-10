#include "main.h"
/**
 * read_textfile - read a text file and printed to the POSIX
 * @filename: the name of the file.
 * @letters: number of letters inside filename.
 * Return: the actual number of letters or zero.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

int re_re, re_wr, re_op;
char *BUF;
BUF = malloc(sizeof(char) * letters);
re_op = open(filename, O_RDONLY);
if (!filename)
{
return (0);
}
re_re = read(re_op, BUF, letters);
re_wr = write(STDOUT_FILENO, BUF, re_re);
if (re_op == -1 || re_re == -1 || re_wr == -1 || re_wr != re_re)
	{
free(BUF);
return (0);
	}
free(BUF);
close(re_op);
return (re_wr);
}
