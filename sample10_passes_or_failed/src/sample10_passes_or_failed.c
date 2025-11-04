/*
 ============================================================================
 Name        : sample10_passes_or_failed.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	printf("Please enter your mark");
	fflush(stdout);
	scanf("%f",&mark);

	if (mark>=50){
		printf("You have passed");
		fflush(stdout);
	}else{
		printf("You have failed");
		fflush(stdout);
	}




	return EXIT_SUCCESS;
}
