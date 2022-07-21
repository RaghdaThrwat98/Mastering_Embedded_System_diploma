/*
 ============================================================================
 Name        : function_assignmenttt.c
 Author      : Raghda Thrwat
Example    :  prime numbers between two intervals by making user_defined function

 ============================================================================
*/
#include <stdio.h>
int prime_numbers (int);
int main ()
{
	int n1,n2,flag;
	printf("Enter two numbers");
 fflush(stdout);
	scanf("%d %d",&n1, &n2);
	for(int i=n1+1;i<n2;i++)
	{
		flag=prime_numbers(i);
		if (flag==0)
		{
			printf("%d\t",i);
		}
	}
		return 0;

	}

int prime_numbers (int num)
{
	int flag=0 ;
	for(int j=2;j<=num/2;j++)
	{
		if (num%j==0)
		{
			flag=1;
			break;
		}
	}
	return flag ;
}
