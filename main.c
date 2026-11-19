#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int h = 4;
	
	for(int i = 1; i <= h; i++)
	{
		for(int j = 1; j <= i ;j++ )
		{
			printf("* ");
		}
		printf(" \n");
	}
	
	
	return 0;
}
