#include<stdio.h>
void example4()
{
	int n,i,array[15],*ptr;
	printf("Enter no of elements\n");
	fflush(stdout);
	scanf("%d",&n);
	ptr=&array[0];
	for(i=0;i<n;i++)
	{

		scanf("%d",ptr);
		ptr++;
	}
	ptr=&array[n-1];
	printf("the reverse array is\n ");
	for (int i =n;i>0;i--)
	{
		printf("\n element - %d :%d",i,*ptr);
		ptr--;}
}
