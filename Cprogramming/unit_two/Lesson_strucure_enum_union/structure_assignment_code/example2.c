/*
 *  Created on: Sep 28, 2022
 *      Author: Raghda Thrwat
 */
#include <stdio.h>
struct Sdistance
{
	int feet ;
	float inch;
}distance1,distance2,sum;

void example2 ()
{
	printf("Enter info for 1st distance\n");
	//fflush(stdout);
	printf("Enter feet:");
	fflush(stdout);
	scanf("%d",& distance1.feet);
	printf("Enter inch:");
	fflush(stdout);
	scanf("%f",& distance1.inch);
	printf("Enter info for 2nd distance\n");
	printf("Enter feet:");
	fflush(stdout);
	scanf("%d",& distance2.feet);
	printf("Enter inch:");
	fflush(stdout);
	scanf("%f",& distance2.inch);

	sum.feet=distance1.feet+distance2.feet;
	sum.inch=distance1.inch+distance2.inch;
	if (sum.inch>12)
	{
		sum.inch=sum.inch-12	;
		++sum.feet;
	}
	printf("sum of distances=%d -%.1f\"",sum.feet,sum.inch);

}
