#include <stdio.h>
/**
 * main -  prints the size of various types .
 * Return: success is 0
*/
int main(void)
{
	char chartyp;
	int inttyp;
	long int linttyp;
	long long int llinttyp;
	float floattyp;
printf("Size of a char: %zu byte(s)\n", sizeof(chartyp));
printf("Size of a int: %zu byte(s)\n", sizeof(inttyp));
printf("Size of a long int: %zu byte(s)\n", sizeof(linttyp));
printf("Size of a long long int: %zu byte(s)\n", sizeof(llinttyp));
printf("Size of a float: %zu byte(s)\n", sizeof(floattyp));
return (0);
}
