#include	<stdio.h>
#include	<stdlib.h>

int main()
{

char c[30];

do
{
printf("Adjon meg egy Unix parancsot! Ctr + C-vel l�phet ki.\n\n");
scanf("%s", c);

system(c);

printf("\n");
} while (1);

	exit(0);
}
