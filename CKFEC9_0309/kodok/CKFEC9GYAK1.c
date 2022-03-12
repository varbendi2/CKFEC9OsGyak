#include	<stdio.h>
#include	<stdlib.h>

int main()
{
	int	status;

    printf("\n\n");

	if ( (status = system("date")) < 0)
		perror("system() error");

	if (WIFEXITED(status))
		printf("Az els� eset norm�lis befejez�d�s, visszaadott �rt�k = %d\n", WEXITSTATUS(status));


    if ( (status = system("alma")) < 0)
		perror("system() error");

	if (WIFEXITED(status))
		printf("A m�sodik eset nem norm�lis befejez�d�s, visszaadott �rt�k = %d\n", WEXITSTATUS(status));

    printf("\n\n");

	exit(0);
}
