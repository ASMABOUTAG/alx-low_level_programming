#include <stdio.h>
/**
 * main -  prints the size of various types .
 * Return: success is 0
*/
int main(void)
{
	 #warning depends on the computer is compiled and run on.
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of a int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
