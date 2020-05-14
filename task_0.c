#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int i = 0;
	char *path, c;
	FILE *monty_file;
	char *buffer;
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	path = argv[1];
	monty_file = fopen(path, "r");
	if (monty_file == NULL)
	{
		perror("Cant open file");
		exit(-1);
	}
	/*-------*/
	c = fgetc(monty_file);
	while (c != EOF)
	{
		printf ("%c", c);
		c = fgetc(monty_file);
		buffer = strncat(buffer, &c, 1);
	}
	printf("%s\n", buffer);
	/*-------*/
	fclose(monty_file);
	return (0);
}
