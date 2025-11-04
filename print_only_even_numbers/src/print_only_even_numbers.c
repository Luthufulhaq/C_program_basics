/*
 ============================================================================
 Name        : print_only_even_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i;
	printf("Enter a number ");
	fflush(stdout);
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(i%2==0){
			printf("%d\n",i);
			fflush(stdout);
		}
	}
	return EXIT_SUCCESS;
}
