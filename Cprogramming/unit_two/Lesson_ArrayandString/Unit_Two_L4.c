/*
 ============================================================================
 Name        : Unit_Two_L4.c
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	/*                  Array                     */

	/*Ex1 find sum of two matrix of order 2*2 using multidimensional arrays
		float array1 [2][2]={0};
		float array2 [2][2]={0};
		float sum [2][2]={0};
		printf("Enter elements of array 1\n");
		fflush(stdout);
		for (int i=0; i<2;i++)
		{
			for (int j=0;j<2;j++)
			{
				printf("Enter array1 %d%d:",i+1,j+1);
			  fflush(stdout);
				scanf("%f",&array1[i][j]);
			}

		}

		printf("Enter elements of array 2\n");
		fflush(stdout);
		for (int i=0; i<2;i++)
		{
			for (int j=0;j<2;j++)
			{
				printf("Enter array2 %d%d:",i+1,j+1);
						  fflush(stdout);
				scanf("%f",&array2[i][j]);
			}

		}

		printf("the sum of two array\n");
		//fflush(stdout);
		for (int i=0; i<2;i++)
		{
			for (int j=0;j<2;j++)
			{
				sum[i][j]=array1[i][j]+array2[i][j];
			}

		}
		for (int i=0; i<2;i++)
		{
			for (int j=0;j<2;j++)
			{
				printf("%.1f\t",sum[i][j]);
				if (j==1)
				printf("\n");
			}

		}

	}
	 */

	/*EX2 C program to calculate Average UsingArrays
	float data[100],sum ;
	int n; //which n no.of elements of array data
	printf("Enter the numbers of data:");
	fflush(stdout);
	scanf("%d",&n);
	for (int i =0;i<n;i++)
	{
		printf(" %d . Enter number ",i+1);
		fflush(stdout);
		scanf("%f",&data[i]);

	}
	for (int i =0;i<n;i++)
		{
		sum=data[i]+sum;
		}
printf("Average =%.2f",sum/n);
}

	 */
	/*EX3 C program to find Transpose of a matrix
	int a[10][10], transpose[10][10], r, c;
	  printf("Enter rows and columns: ");
	  fflush(stdout);
	  scanf("%d %d", &r, &c);

	  printf("\nEnter matrix elements:\n");
	  for (int i = 0; i < r; ++i)
	  for (int j = 0; j < c; ++j) {
	    printf("Enter element a%d%d: ", i + 1, j + 1);
	    fflush(stdout);
	    scanf("%d", &a[i][j]);
	  }

	  printf("\nEntered matrix: \n");
	  for (int i = 0; i < r; ++i)
	  for (int j = 0; j < c; ++j) {
	    printf("%d  ", a[i][j]);
	    if (j == c - 1)
	    printf("\n");
	  }


	  for (int i = 0; i < r; ++i)
	  for (int j = 0; j < c; ++j) {
	    transpose[j][i] = a[i][j];
	  }

	  printf("\nTranspose of the matrix:\n");
	  for (int i = 0; i < c; ++i)
	  for (int j = 0; j < r; ++j) {
	    printf("%d  ", transpose[i][j]);
	    if (j == r - 1)
	    printf("\n");
	  }
}
	 */
	/*EX4 C program to Insert an element in an array
	int array [20],n,inserted_num,location;
	printf("Enter no of elements :");
	fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the element to be inserted:");
	fflush(stdout);
	scanf("%d",&inserted_num);
	printf("Enter the location");
	fflush(stdout);
	scanf("%d",&location);
	for(int i=n;i>=location;i--)
	{
		array[i]=array[i-1];
	}
	n++;
	array[location-1]=inserted_num;
	for(int i=0;i<n;i++)
	{
printf("%d",array[i]);
	}
}
	 */
	/*EX5 C Program to search an element in Array

	int array [100],requird_element,n;
	printf("Enter no of elements");
	fflush(stdout);
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the elements to be searched");
	fflush(stdout);
	scanf("%d",&requird_element);

	for (int i=0;i<n;i++)
	{
		if(array[i]==requird_element)
		{
			printf("Number found at the location =%d",i+1);
		}
	}
}
	 */
	/*                  STRING                      */
	/*EX1 C Program to find the frequency of characters in a string
	char string [100],character;
	int counter=0;
	printf("Enter a string :");
	fflush(stdout);
	gets(string);
	printf("Enter a character to find frequency");
	fflush(stdout);
	scanf("%c",&character);
	for (int i=0;string[i]!='\0';i++)
	{
		if (string[i]==character)
		{
			counter=counter+1;
		}

	}
	printf("Frequency of %c =%d",character,counter);
}
	 */
	/*EX2 C Program to find the length of a string
	char string [100];
	int counter=0;
	printf("Enter a string :");
	fflush(stdout);
	gets(string);
	for (int i=0;string[i]!='\0';i++)
	{
		counter=counter+1;
	}
printf("Length of string :%d",counter);
}
	 */

	/*EX3 C Program to Reverse string without using library Function
	char string [100];
	 int i,j,temp;
	printf("Enter a string :");
	fflush(stdout);
	gets(string);
	i=0;
	j=strlen(string )-1;
	while(i != j)
	{
	temp=string[i];
	string[i]=string[j];
	string[j]=temp;
	i++;
	j--;
	}
	printf("the reverse of string is: %s",string);
}
	 */
}
