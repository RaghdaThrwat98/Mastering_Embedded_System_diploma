/*
 * main.c
 *
 *  Created on: Jul 21, 2022
 *      Author: Raghda Thrwat
 *      C programe to calulate Factorial of a number using Recursionl
 */
#include <stdio.h>
int find_factorial (int);
int Required_number,factorial=1 ;
int main()
{
	printf ("Enter the  a postive integer number");
	fflush(stdout);
	scanf("%d",&Required_number);
	factorial=find_factorial (Required_number);
	printf(" factorial of %d = %d",Required_number,factorial);
	return 0 ;

}
int find_factorial (int Required_number ){


	if ( Required_number!=1)
		factorial=Required_number* find_factorial (Required_number-1 );
	return factorial ;

}
