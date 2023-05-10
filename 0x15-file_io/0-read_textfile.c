#include "main.h"
/**
 * read_textfile - read a text file and printed to the POSIX
 * @filename: the name of the file.
 * @letters: number of letters inside filename.
 * Return: the actual number of letters or zero.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t i;
int rd;
char bu[BUFSIZ];
rd = open(filename, O_RDONLY);
if (!filename || rd  == -1)
{
return (0);
}
read(rd, bu, BUFSIZ);
if (read(rd, bu, BUFSIZ) == -1)
{
return (0);
}
for (i = 0; i < letters; i++)
{
_putchar(bu[i]);
}
_putchar('\n');
close(rd);
return (letters);
}
