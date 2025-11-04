/*
 ============================================================================
 Name        : sum_of_n_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i,sum=0;
	printf("Enter a number ");
	fflush(stdout);
	scanf("%d",&number);
	for(i=1;i<number;i++){
		sum=sum+i;
		printf("%d\n",i);
			fflush(stdout);
	}
	printf("Result = %d",sum);
	fflush(stdout);

	return EXIT_SUCCESS;
}
