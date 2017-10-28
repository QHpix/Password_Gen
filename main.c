#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char chrs[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!_";

int main()
{
	int pl, len = strlen(chrs), r, i;
	srand(time(NULL));
	char *passw;
	printf("Enter the length of the password: ");
	scanf("%d", &pl);
	passw = (char *)malloc(pl*sizeof(char));
	for(i = 0; i < pl;i++)
	{
		r = rand() % len;
		passw[i] = chrs[r];
	}
	printf("%s\n", passw);
	return 0;
}
