/*
 ============================================================================
 Name        : sample2_basicsyntax.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	printf("Enter any number");
	fflush(stdout);
	scanf("%d",&a);
	printf("You have entered the number %d",a);

	return EXIT_SUCCESS;
}
