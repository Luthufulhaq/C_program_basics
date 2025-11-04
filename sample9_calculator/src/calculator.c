/*
 ============================================================================
 Name        : calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,choice,result;
	printf("Enter 2 number :");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("Select Any operation :\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
	fflush(stdout);
	scanf("%d",&choice);

	if(choice==1){
		result=num1+num2;
		printf("Result is :%d",result);
		fflush(stdout);
	}else if(choice==2){
		result=num1-num2;
		printf("Result is :%d",result);
		fflush(stdout);
	}else if(choice==3){
		result=num1*num2;
		printf("Result is :%d",result);
		fflush(stdout);
	}else if(choice==4){
		result=num1/num2;
		printf("Result is :%d",result);
		fflush(stdout);
	}else{
		printf("Your selection is invalid");
	}
	return EXIT_SUCCESS;
}
