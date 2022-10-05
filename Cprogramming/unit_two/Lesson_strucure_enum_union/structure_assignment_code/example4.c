/*
 *  Created on: Oct 5, 2022
 *      Author: Raghda Thrwat
 */
#include<stdio.h>
struct SStudent
{
	char array[50];
	float marks;
	int roll;
}student[3];
void example4 ()
{
	printf("Enter information of students:\n");
	for (int i=0;i<3;i++)
	{
		student[i].roll=i+1;
		printf(" for roll number %d\n",student[i].roll);
		printf("Enter name");
		fflush(stdout);
		scanf("%s",student[i].array);
		printf("Enter marks");
		fflush(stdout);
		scanf("%f",&student[i].marks);
	}
	printf("Displaying information of students:\n");
	fflush(stdout);
	for (int i=0;i<3;i++)
	{
		printf(" for roll number %d\n",i+1);

		printf("Name:%s\n",student[i].array);
		printf("Marks:%f\n",student[i].marks);

	}
}


