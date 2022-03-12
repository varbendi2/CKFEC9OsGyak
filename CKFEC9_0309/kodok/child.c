#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
int i = 0;


    pid_t pid=fork();
    if (pid==0) {
        printf("---Gyermek processz---\n");
        do
        {
            printf("\nA tanul� neve: Garamszegi M�rton\nNeptun k�dom: AJYKQ3\n\n");
            i++;


        }while (i<5);

        exit(127);
    }
    else {
        waitpid(pid,0,0);



        printf("---Sz�l� processz---\n\nA gyermek processz befejezte a fut�s�t!\n");
    }
    return 0;
}
