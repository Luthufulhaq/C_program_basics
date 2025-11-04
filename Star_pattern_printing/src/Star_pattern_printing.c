/*
 ============================================================================
 Name        : Star_pattern_printing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j;
	printf("Enter any number : ");
	fflush(stdout);
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("* ");
			fflush(stdout);
		}
		printf("\n");
		fflush(stdout);
	}
	return EXIT_SUCCESS;
}
