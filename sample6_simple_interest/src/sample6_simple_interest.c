/*
 ============================================================================
 Name        : sample6_simple_interest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float R,n,SI;
	printf("Enter the Principal Amount : ");
	fflush(stdout);
	scanf("%d",&P);
	printf("Enter the Interest Rate : ");
	fflush(stdout);
	scanf("%f",&R);
	printf("Enter the number of years : ");
	fflush(stdout);
	scanf("%f",&n);
	SI=(P*R*n)/100;
	printf("Simple Interest for the given are :%f\n",SI);
	fflush(stdout);
	printf("The total amount with interest will be :%f\n",SI+P);
	fflush(stdout);
	printf("Your monthly EMI will be :%f\n",(SI+P)/(n*12));
	fflush(stdout);

	return EXIT_SUCCESS;
}
