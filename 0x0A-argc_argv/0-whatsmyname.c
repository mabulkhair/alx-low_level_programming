#include <stdio.h>
#include "main.h"

/**
 * main - prints program name, followed by  a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main (int argc __attribute__((unused)), char *argv[])
{
	puts(argv[0]);
	return (0);
}
