/*
 * example5.c
 *
 *  Created on: Oct 4, 2022
 *      Author: Raghda Thrwat
 */
#include <stdio.h>
struct employee
{
	char *empname;
	int empid;
};

void example5 ()
{
struct employee emp1={"john",1001},emp2={"Alex",1002},emp3={"taylor",1003};
struct employee (*arr[])={&emp1,&emp2,&emp3};
struct employee (*(*pt)[3])=&arr;
printf("Employee name :%s\n",(**(*pt+1)).empname);
printf("Employee ID:%d\n",(*(*pt+1))->empid);
}

