/*
 * example1.c
 *
 *  Created on: Oct 4, 2022
 *      Author: Raghda Thrwat
 */

#include <stdio.h>
void example1()
{

	int *ab;
	int m =29;
	printf("Address of m:%p\n",&m);
	printf("the value of m =%d\n",m);
	ab=&m;
	printf("Now ab is assigned with the address of m.\n ");
	printf("Address of pointer ab:%p\n",&ab);
	printf("Content of pointer ab :%d\n ",*ab);

	m=34;
	printf("The value of m assigned to 34 now.\n ");
	printf("Address of pointerab:%p\n",&ab);
	printf("Content of pointer ab : %d\n ",*ab);

	*ab=7;
	printf("The pointer variable ab is assigned with the value 7 now.\n ");
	printf("Address of m:%p\n",&ab);

	printf(" Value of m :%d\n",*ab);
}
