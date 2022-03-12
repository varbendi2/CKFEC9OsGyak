#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    system("cc child.c -o child.out");
    system("./child.out");




    return 0;
}
