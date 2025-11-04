/*
 ============================================================================
 Name        : sample7_neg_or_pos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter a number :");
	fflush(stdout);
	scanf("%d",&num);
	if (num>0)
	{printf("The number is positive");}
	else{printf("The number is negetive");}

	return EXIT_SUCCESS;
}
