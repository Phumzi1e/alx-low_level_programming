#include "main.h"

/**
 *main - check the code
 * Return: Always 0.
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *followed by a new line
 */

int main(void)
void print_alphabet_x10(void);
{
	print_alphabet();
	char ch;

	return (0);
	int i;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
