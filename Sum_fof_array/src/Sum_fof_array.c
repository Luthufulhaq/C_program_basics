/*
 ============================================================================
 Name        : Sum_fof_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,values[100],sum=0;
	printf("Enter the Array Size : ");
	fflush(stdout);
	scanf("%d",&limit);
	printf("Enter the Array Values : ");
	fflush(stdout);

	for(i=0;i<limit;i++)
	{
		scanf("%d",&values[i]);
	}

	for(i=0;i<limit;i++)
	{
		sum=sum+values[i];
	}
	printf("The sum of the number is : %d",sum);
	fflush(stdout);

	return EXIT_SUCCESS;
}
