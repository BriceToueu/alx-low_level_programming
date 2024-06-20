#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints exactly the text of the last task on  hello world C project
 *              followed by new line, to the standard error.
 *
 * Return: Alawys 1 (sucess)
 */

int main(void)

{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
