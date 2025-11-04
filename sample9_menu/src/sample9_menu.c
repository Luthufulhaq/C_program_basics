/*
 ============================================================================
 Name        : sample9_menu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("Enter any your choice from the menu : \n1.porotta\n2.Biriyani\n3.Mandhi\n4.Fried rice");
	fflush(stdout);
	scanf("%d",&choice);

	switch(choice){
	case 1:
		printf("You have selected porotta");
		fflush(stdout);
		break;
	case 2:
		printf("You have selected Biriyani");
		fflush(stdout);
		break;
	case 3:
		printf("You have selected Mandhi");
		fflush(stdout);
		break;
	case 4:
		printf("You have selected Fried Rice");
		fflush(stdout);
		break;
	default:
		printf("You have selected invalid ");
		fflush(stdout);
		break;
	}

	return EXIT_SUCCESS;
}
