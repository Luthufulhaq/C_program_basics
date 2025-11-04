/*
 ============================================================================
 Name        : Multi_dimensional_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,values[4][4];
	printf("Enter the Values ");
	fflush(stdout);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&values[i][j]);
		}
	}
	printf("The Entered array is :\n");
	fflush(stdout);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",values[i][j]);
			fflush(stdout);
		}
		printf("\n");
		fflush(stdout);
	}
	return EXIT_SUCCESS;
}
