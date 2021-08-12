#include <unistd.h>
#include <string.h>
/**
 * main - first function to execute when run program
 * prints "Holberton"
 * Return: 0
 */
int main(void)
{
	char *a = "_putchar\n";

	write(1, a, strlen(a));
	return (0);
}
