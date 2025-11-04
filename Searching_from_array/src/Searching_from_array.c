/*
 ============================================================================
 Name        : Searching_from_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,values[100],searchkey,flag=0;
	printf("Enter the Array size");
	fflush(stdout);
	scanf("%d",&limit);
	printf("Enter the array values");
	fflush(stdout);
	for(i=0;i<limit;i++)
	{
		scanf("%d",&values[i]);
	}
	printf("Enter the Value to search");
	fflush(stdout);
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++)
	{
		if(searchkey==values[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Value found at position %d",i+1);
		fflush(stdout);
	}
	else
	{
		printf("Value not found");
	}
	return EXIT_SUCCESS;
}
