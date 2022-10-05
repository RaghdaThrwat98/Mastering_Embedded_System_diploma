#include <stdio.h>
void example3 ()
{
	char string [50];
	char revstring [50];
	char *stptr=string;
	char *revptr=revstring;
	int i =-1;

	printf("enter a string\n ");
	fflush(stdout);
	scanf("%s",string);
	while( *stptr)
	{
		stptr++;
		i++;
	}
	while(i>=0)
	{
		stptr--;
		*revptr=*stptr;
		revptr++;
		i--;

	}
	*revptr='\0';
	printf("reverse of string  is :%s\n\n",revstring);

}
