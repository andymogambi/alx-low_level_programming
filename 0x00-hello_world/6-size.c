#include <stdio.h>
/**
 * main - print the string in the function
 * Description: using the main function
 * this program prints the results of the function
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %id byte(s)\n", sizeof (c));
	printf("Size of an int: %id byte(s)\n", sizeof (i));
	printf("Size of long int: %id byte(s)\n", sizeof (li));
	printf("Size of a long long int: %id byte(s)\n", sizeof (lli));
	printf("Size of float: %id byte(s)\n", sizeof(f));
	return (0);
}
