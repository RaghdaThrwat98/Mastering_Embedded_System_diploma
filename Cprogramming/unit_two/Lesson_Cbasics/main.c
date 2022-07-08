/*
 * main.c
 *
 *  Created on: Jul9, 2022
 *      Author: Raghda Thrwat
 */
#include<stdio.h>

int main(){
	/*        EX1 Write C Program to Print a Sentence
	printf("C Programming");
	}

	 */
	/*        EX2 write C Program to Print a Integer Entered by a User
	int num ;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d",&num);
printf("You entered:%d",num);

}
	 */
	/*        EX3 Write C Program to Add Two Integers

	int num1,num2,sum=0 ;
	printf("Enter two integer:\n ");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("sum:%d",sum);

}
	 */
	/*        EX4 Write C Program to Multiply two Floating Point Numbers
	float num1 ,num2 ,Product=1;
	printf("Enter two numbers:");
	fflush(stdout);
	scanf("%f%f",&num1,&num2);
	Product=num1*num2;
	printf("Product:%f",Product);
}
	 */
	/*        EX5 Write C Program to Find ASCII Value of a Character

	char character ;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c", &character);
	printf("ASCII value of G = %d",character);
}
	 */
	/*        EX6 Write Source Code to Swap Two Numbers
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a %.2f\n",a);
	printf("After swapping, value of b %.1f",b);
}
	 */
	/*        EX7 Write Source Code to Swap Two Numbers without temp variable.
	float a,b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	a=a+b;//a=30 (10+20)
	b=a-b;//b=10 (30-20)
	a=a-b;//a=20 (30-10)
	printf("After swapping, value of a %.2f\n",a);
	printf("After swapping, value of b %.1f",b);
}
	 */
	/*############################HOMEWORK2###################################*/
	/*        EX1 Write C Program to check whether a number is even or odd
	int num ;
	printf("Enter an integer you want to check:");
	fflush(stdout);
	scanf("%d",&num);
	if ((num%2)==0)
	{printf("%d is even.",num);}
	else
	{
		printf("%d is odd.",num);
	}
	 */
	/*        EX2 Write C Program to check vowel or consonant
	char an_alphet ;
	printf("Enter an alphabet :");
	fflush(stdout);
	scanf("%c",&an_alphet);
	if (an_alphet=='A'||an_alphet=='a'||an_alphet=='E'||an_alphet=='e'||an_alphet=='I'||an_alphet=='i'||an_alphet=='O'||an_alphet=='o'||an_alphet=='U'||an_alphet=='u')
	{
		printf("%c is a vowel.",an_alphet);
	}
	else
	{
		printf("%c is a consonant.",an_alphet);
	}
	 */
	/*        EX3 Write C Program to find the largest number among three numbers
	float a ,b, c;
	printf("Enter three numbers:");
	fflush(stdout);
	scanf("%f%f%f",&a,&b,&c);
	if (a>b&&b>c)


	{	printf("Largest number=%0.2f",a);}

	else if (b>a&&b>c)


		{	printf("Largest number=%0.2f",b);}
	else
	{	printf("Largest number=%0.2f",b);}
}
	 */
	/*        EX4 Write C Program to check whether a number is postive or negative
	float num ;
printf("Enter a number:");
fflush(stdout);
scanf("%f",&num);
if (num >0)
{printf("%.2f is positive",num);}
else if (num ==0)
{printf("You entered Zero.");}
else
{printf("%.2f is negative",num);}
	 */
	/*        EX5 Write C Program to check whether a character is an alphabet or not
	char alphabet ;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c",&alphabet);
	if ((alphabet>='a'&&alphabet<='z')||( alphabet>='A'&&alphabet<='Z'  ))
	{printf("%c is an alphabet",alphabet);}
	else
	{printf("%c is not an alphabet",alphabet);}
}
	 */
	/*        EX6 Write C Program to calculate sum of natural numbers
int n,sum=0 ;
printf("Enter an integer:");
fflush(stdout);
scanf("%d",&n);
for(int i=0;i<=n;i++)
{
sum=sum+i;
}
printf("Sum=%d",sum);

}*/
	/*        EX7 Write C Program to find factorial of a Number

	int n ,factorial=1 ;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&n);
	if (n<0)
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else
	{
		while (n>0)
		{
			factorial=factorial*n ;
			n--;

		}
		printf("Factorial=%d",factorial);
	}
}
*/
    /*       EX8 Write C Program to make a simple calculator by using switch..case
	char operator;
	float num1,num2;
	printf("Enter operator either + or - or * or divide :");
	fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands:");
	fflush(stdout);
	scanf("%f%f",&num1,&num2);
	switch(operator){
	case '+':
	printf("%.1f + %.1f = %.1f",num1,num2,num1+num2);break;
	case '-':
		printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);break;
	case '*':
		printf("%.1f * %.1f = %.1f",num1,num2,num1*num2);break;
	case '/':
		printf("%.1f / %.1f = %.1f",num1,num2,num1/num2);break;

	default:
		printf("Please Enter a correct operator");break;

	}
}

*/
}
