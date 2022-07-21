/*
 * main.c
 *
 *  Created on: Jul 21, 2022
 *      Author: Raghda Thrwat
 *      C programe to calulate the power of a number using recursion
 */


#include <stdio.h>
int calcuate_the_power_of_number (int num ,int power );
int main ()
{
	int num,power;
printf("Enter base number");
fflush(stdout);
scanf("%d",&num);
printf("Enter  power number (postive integer):");
fflush(stdout);
scanf("%d",&power);
printf("%d^%d=%d",num,power,calcuate_the_power_of_number(num,power));

}
int calcuate_the_power_of_number(int num ,int power )
{
	if (power!=0)
	return (num*calcuate_the_power_of_number(num,power-1));

else
return 1;
}
