/*
 ============================================================================
 Name        : sample8_greater_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3;
	printf("Enter 3 numbers :");
	fflush(stdout);
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
		printf("Greater is :%d",num1);
		fflush(stdout);}
		else{printf("Greater is :%d",num3);
		fflush(stdout);}
	}

	else{
		if(num2>num3){
			printf("Greater is :%d",num2);
		fflush(stdout);}
		else{
			printf("Greater is :%d",num3);
		fflush(stdout);}
		}

	return EXIT_SUCCESS;
}
