/*complex number
 *  Created on: Oct 5, 2022
 *      Author: Raghda Thrwat
 */
#include <stdio.h>
struct scomplex
{
	float real;
	float complex;
};
void example3()
{
	struct scomplex number[2];
	for(int i=0;i<2;i++)
	{
		printf("enter areal part of number%d",i+1);
		fflush(stdout);
		scanf("%f",&number[i].real);
		printf("enter acomplex part of number%d",i+1);
		fflush(stdout);
		scanf("%f",&number[i].complex);
	}
	struct scomplex add_two_complex_numbers;
	add_two_complex_numbers.real=number[0].real+number[1].real;
	add_two_complex_numbers.complex=number[0].complex+number[1].complex;
	printf(" add two numbers is %.1f+%.1fj",add_two_complex_numbers.real,add_two_complex_numbers.complex);
}


