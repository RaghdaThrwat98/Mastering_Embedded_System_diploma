/*
 * main.c
 *
 *  Created on: Sep 28, 2022
 *      Author: Raghda Thrwat
 */
/*
 * main.c
 *
 *  Created on: Sep 28, 2022
 *      Author: Raghda Thrwat
 */

/*  C program to store information (name,roll and marks)of a student using structure  */
#include <stdio.h>
void example1 ()
{
	struct Sinfo
	{
		char name[100];
		int roll;
		float marks ;

	}student;

	printf("Enter information of students\n");
	printf("Enter name:");
	fflush(stdout);
	scanf("%s",student.name);
	printf("Enter roll:");
	 fflush(stdout);
	scanf("%d",&student.roll);
	printf("Enter marks:");
	 fflush(stdout);
	scanf("%f",&student.marks);
	printf("Displaying information\n");
	printf("Name:%s\n",student.name);
	printf("roll:%d\n",student.roll);
	printf("marks:%f\n",student.marks);

}


