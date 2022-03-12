#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{

    int status;
    pid_t pid;
     if ((pid = fork()) == -1)
        perror("Hiba");


     else if ((status = execl("/bin/ls", "ls", "-la", NULL)) < 0)
		perror("system() error");

	    if (WIFEXITED(status))
    {
printf("Norm�lis befejez�d�s, visszaadott �rt�k = %d\n", WEXITSTATUS(status));
    }



    if ((pid = fork()) == -1)
        perror("Hiba");


     else if ( (status = system("alma")) < 0)
		perror("system() error");

	    if (WIFEXITED(status))
    {
printf("Nem norm�lis befejez�d�s, visszaadott �rt�k = %d\n", WEXITSTATUS(status));
    }

    else {
        waitpid(pid,0,0);

        printf("\nA gyermek processz befejezte a fut�s�t!\n");
    }
    return 0;
}
