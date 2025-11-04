/*
 ============================================================================
 Name        : day_selection.c
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
	printf("Please enter which day is this?\n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday");
	fflush(stdout);
	scanf("%d",&choice);

	switch(choice){

	case 1:
		printf("You have selected Sunday");
		fflush(stdout);
		break;
	case 2:
			printf("You have selected Monday");
			fflush(stdout);
			break;
	case 3:
			printf("You have selected Tuesday");
			fflush(stdout);
			break;
	case 4:
			printf("You have selected Wednesday");
			fflush(stdout);
			break;
	case 5:
			printf("You have selected Thursday");
			fflush(stdout);
			break;
	case 6:
			printf("You have selected Friday");
			fflush(stdout);
			break;
	case 7:
			printf("You have selected Saturday");
			fflush(stdout);
			break;
	default:
			printf("You have given invalid data");
			fflush(stdout);
	}

	return EXIT_SUCCESS;
}
