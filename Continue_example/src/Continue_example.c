/*
 ============================================================================
 Name        : Continue_example.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=10;
	for(i=0;i<10;i++)
	{
		printf("Hi\n");
		if(i==5)
		{
			continue;
		}
		printf("Hello\n");
	}
	printf("Finished\n");

	return EXIT_SUCCESS;
}
