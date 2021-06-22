#include <holberton.h>
/**
 * main - first function to execute when run program
 * prints "Holberton"
 * Return: 0
 */
int main(void)
{
  char holberton[] = "Holberton";
  int i = 0;

  while (holberton[i] != '\0')
    {
      putchar(holberton[i]);
      i++;
    }
  putchar('\n');
  return (0);
}
