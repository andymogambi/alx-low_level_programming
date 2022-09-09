#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints quote
 * Description: using the main function
 * this program prints the results of the function
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
