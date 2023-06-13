#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* argstostr(int ac, char** av)
{
	if (ac == 0 || av == NULL)
	{
		return NULL;
	}

	int total_length = 0;
	for (int i = 0;i < ac; i++)
	{
		total_length += strlen(av[i] + 1;
				}
				cha* concatenated = (char*)malloc((total_length + 1) * sizeof(char));
				if (concatenated == NULL) {
				return NULL;
				}
				int index = 0;
				for (int i = 0; i <ac; itt) {
				strcpy(concatenated + index, av[i];
						index += strlen(av[i]);
						concatenated[index++] = '\n';
						}
						concatenated[index] = '\n';
						}
						int main(int argc; char* argv[]) {
						char* result = argstostr(argc - 1, argv + 1);
						if (result != NULL) {
						printf("%s\n", result);
						free(result);
						}
						return 0;
						}
