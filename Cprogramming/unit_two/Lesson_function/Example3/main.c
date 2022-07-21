/*
 * main.c
 *
 *  Created on: Jul 21, 2022
 *      Author: Raghda Thrwat
 *      C programe to reverse a sentence using Recursion
 */
#include <stdio.h>
void Reverse ();
int main ()
{
	fflush(stdout);
printf("Enter a sentence :");
Reverse ();
return 0;
}
void Reverse ()
{
char c ;
fflush(stdout);
scanf("%c",&c);
if (c != '\n')
{
Reverse();
printf("%c",c);
}
}

