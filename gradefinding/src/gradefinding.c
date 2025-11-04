/*
 ============================================================================
 Name        : gradefinding.c
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
	printf("Enter your total mark ");
	fflush(stdout);
	scanf("%f",&mark);

	if (mark>100||mark<0){
		printf("You have given a wrong input");
		fflush(stdout);
	}else if(mark>=90||mark==100){
		printf("Your grade is A");
		fflush(stdout);
	}else if(mark>=80){
		printf("Your grade is B");
		fflush(stdout);
	}else if(mark>=70){
		printf("Your grade is C");
		fflush(stdout);
	}else if(mark>=60){
		printf("Your grade is D");
		fflush(stdout);
	}else if(mark>=50){
		printf("Your grade is E");
		fflush(stdout);
	}else{
		printf("You have failed");
		fflush(stdout);
	}
	return EXIT_SUCCESS;
}
