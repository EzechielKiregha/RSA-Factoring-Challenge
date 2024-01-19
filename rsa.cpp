#include "header.h"
/**
 * main - checks the entry point of the program
 * @ac: argument counter integer variable
 * @av: argument vector, a char array
 * Return: Always 0
 */
int main(__attribute__((unused)) int ac, char **av)
{
	RSAPrime fact(av[1]);

	fact.run();

	return (0);
}
