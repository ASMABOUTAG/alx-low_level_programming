#include <unistd.h>
/**
 * main - will print _putchar.
 * Return: success is 0.
*/
int main(void)
{
	char putch[] = "_putchar\n";
	write(1, putch, sizeof(putch)-1);
return (0);
}
	
