#include	<stdio.h>
#include	<stdlib.h>

int main()
{
	int	status;

    printf("\n\n");

	if ( (status = system("date")) < 0)
		perror("system() error");

	if (WIFEXITED(status))
		printf("Az elsõ eset normális befejezõdés, visszaadott érték = %d\n", WEXITSTATUS(status));


    if ( (status = system("alma")) < 0)
		perror("system() error");

	if (WIFEXITED(status))
		printf("A második eset nem normális befejezõdés, visszaadott érték = %d\n", WEXITSTATUS(status));

    printf("\n\n");

	exit(0);
}
