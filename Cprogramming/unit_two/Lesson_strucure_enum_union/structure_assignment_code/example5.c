/*
 *  Created on: Oct 5, 2022
 *      Author: Raghda Thrwat
 */
#define pi 3.14
#define Areaofcricle(r) pi*r*r
#include <stdio.h>
void example5()
{
	float r;
	printf("Enter  a redius of circle:\n");
	fflush(stdout);
	scanf("%f",&r);
printf("the area of circle is %0.2f",Areaofcricle(r));

}
