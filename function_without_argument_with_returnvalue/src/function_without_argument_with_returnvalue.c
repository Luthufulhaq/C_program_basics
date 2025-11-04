/*
 ============================================================================
 Name        : function_without_argument_with_returnvalue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void) {
	int s;
	s=sum();
	printf("Result is :%d",s);
	return EXIT_SUCCESS;
}
int sum(){
	int a,b,c;
	printf("Enter 2 numbers :");
	fflush(stdout);
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
